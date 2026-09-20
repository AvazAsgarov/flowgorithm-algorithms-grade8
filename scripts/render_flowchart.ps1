<#
.SYNOPSIS
    Renders Flowgorithm (.fprg) files directly into genuine, native Flowgorithm flowchart images (.png).

.DESCRIPTION
    Uses Flowgorithm's internal rendering engine to generate crisp, standard-compliant flowchart
    PNGs without requiring manual GUI interactions or taking desktop screenshots.

.PARAMETER FprgPath
    Path to a specific .fprg file to render.

.PARAMETER OutputPath
    Target path for the rendered PNG file. If omitted, saves as 'solution.png' in the same folder.

.PARAMETER All
    Scans the 'topics' directory and renders all 'solution.fprg' files found.

.PARAMETER FontSize
    Base font size for the diagram text. Default is 10.5.

.PARAMETER FontFamily
    Font family name for text. Default is 'Segoe UI'.

.PARAMETER ColorScheme
    Flowgorithm color scheme name. Default is 'Pastel'.

.PARAMETER ChartStyle
    Flowgorithm chart style name. Default is 'Classic'.

.EXAMPLE
    .\scripts\render_flowchart.ps1 -FprgPath "topics\sequential-algorithms\teacher-example\solution.fprg"
    .\scripts\render_flowchart.ps1 -All
#>

[CmdletBinding()]
param(
    [Parameter(Mandatory = $false, Position = 0)]
    [string]$FprgPath,

    [Parameter(Mandatory = $false)]
    [string]$OutputPath,

    [Parameter(Mandatory = $false)]
    [switch]$All,

    [Parameter(Mandatory = $false)]
    [double]$FontSize = 10.5,

    [Parameter(Mandatory = $false)]
    [string]$FontFamily = "Segoe UI",

    [Parameter(Mandatory = $false)]
    [string]$ColorScheme = "Pastel",

    [Parameter(Mandatory = $false)]
    [string]$ChartStyle = "Classic",

    [Parameter(Mandatory = $false)]
    [string]$FlowgorithmPath
)

# Ensure System.Drawing and Windows Forms are loaded
Add-Type -AssemblyName System.Drawing
Add-Type -AssemblyName System.Windows.Forms

function Resolve-FlowgorithmPath {
    param([string]$ExplicitPath)
    if ($ExplicitPath -and (Test-Path $ExplicitPath)) {
        return (Resolve-Path $ExplicitPath).Path
    }
    $candidates = @(
        "C:\Program Files\Flowgorithm\Flowgorithm.exe",
        "C:\Program Files (x86)\Flowgorithm\Flowgorithm.exe",
        "$env:LOCALAPPDATA\Programs\Flowgorithm\Flowgorithm.exe"
    )
    foreach ($cand in $candidates) {
        if (Test-Path $cand) {
            return $cand
        }
    }
    throw "Flowgorithm.exe could not be found. Please specify -FlowgorithmPath."
}

# 1. Locate Flowgorithm
$fgExe = Resolve-FlowgorithmPath -ExplicitPath $FlowgorithmPath

# 2. Load Flowgorithm assembly
$bytes = [System.IO.File]::ReadAllBytes($fgExe)
$asm = [System.Reflection.Assembly]::Load($bytes)

$tMain = $asm.GetType("Flowgorithm.Main")
$mSetup = $tMain.GetMethod("Setup", [System.Reflection.BindingFlags]"Public,Static")
if ($mSetup) { $mSetup.Invoke($null, @()) }

$tProg = $asm.GetType("Stm+Program")
$openMethod = $tProg.GetMethod("Open", [System.Type[]]@([string]))

# Palettes & styles
$fColorSchemes = $tMain.GetField("ColorSchemes", [System.Reflection.BindingFlags]"Public,Static")
$colorSchemes = $fColorSchemes.GetValue($null)
$fChartConfigs = $tMain.GetField("ChartConfigs", [System.Reflection.BindingFlags]"Public,Static")
$chartConfigs = $fChartConfigs.GetValue($null)
$fTranslation = $tMain.GetField("Translation", [System.Reflection.BindingFlags]"Public,Static")
$translation = $fTranslation.GetValue($null)
$mSetupProgram = $tMain.GetMethod("SetupProgram", [System.Reflection.BindingFlags]"Public,Static")

$selectedScheme = $colorSchemes[$ColorScheme]
if (-not $selectedScheme) {
    Write-Warning "Color scheme '$ColorScheme' not found. Falling back to Pastel."
    $selectedScheme = $colorSchemes["Pastel"]
}

$selectedStyle = $chartConfigs[$ChartStyle]
if (-not $selectedStyle) {
    Write-Warning "Chart style '$ChartStyle' not found. Falling back to Classic."
    $selectedStyle = $chartConfigs["Classic"]
}

function Render-SingleFlowchart {
    param(
        [string]$InputPath,
        [string]$TargetPath
    )

    $resolvedInput = (Resolve-Path $InputPath).Path
    if (-not (Test-Path $resolvedInput)) {
        throw "Input file not found: $InputPath"
    }

    if (-not $TargetPath) {
        $parent = Split-Path -Parent $resolvedInput
        $TargetPath = Join-Path $parent "solution.png"
    }

    $prog = [System.Activator]::CreateInstance($tProg)
    $res = $openMethod.Invoke($prog, @($resolvedInput))
    if (-not $res.Success) {
        throw "Flowgorithm failed to open '$resolvedInput': $($res.ErrorText)"
    }

    # Setup program layout
    $mSetupProgram.Invoke($null, @($prog, $selectedStyle, $selectedScheme, $translation))

    # Retrieve Main function
    $mFunc = $tProg.GetMethod("Function", [System.Type[]]@([string]))
    $mainFunc = $mFunc.Invoke($prog, @("Main"))
    if (-not $mainFunc) {
        throw "Main function not found in '$resolvedInput'."
    }

    # Apply typography
    $mainFunc.Font = New-Object System.Drawing.Font($FontFamily, [float]$FontSize)

    # Enforce pure white background on the flowchart canvas
    $mainFunc.BackColor = [System.Drawing.Color]::White

    # Clear interactive mouse hover state
    $mClearMouseOver = $mainFunc.GetType().GetMethod("ClearMouseOver", [System.Reflection.BindingFlags]"Public,Instance")
    if ($mClearMouseOver) { $mClearMouseOver.Invoke($mainFunc, @()) }

    # Create bitmap
    $mCreate = $mainFunc.GetType().GetMethod("Create", [System.Reflection.BindingFlags]"Public,Instance", $null, @(), $null)
    $rawBmp = $mCreate.Invoke($mainFunc, @())

    if (-not $rawBmp) {
        throw "Flowgorithm failed to render bitmap for '$resolvedInput'."
    }

    # Ensure a solid, 100% opaque white background (prevents dark mode transparency issues on GitHub)
    $bmp = New-Object System.Drawing.Bitmap($rawBmp.Width, $rawBmp.Height, [System.Drawing.Imaging.PixelFormat]::Format24bppRgb)
    $g = [System.Drawing.Graphics]::FromImage($bmp)
    $g.Clear([System.Drawing.Color]::White)
    $g.InterpolationMode = [System.Drawing.Drawing2D.InterpolationMode]::HighQualityBicubic
    $g.DrawImage($rawBmp, 0, 0, $rawBmp.Width, $rawBmp.Height)
    $g.Dispose()
    $rawBmp.Dispose()

    # Ensure target directory exists
    $targetDir = [System.IO.Path]::GetDirectoryName([System.IO.Path]::GetFullPath($TargetPath))
    if ($targetDir -and -not (Test-Path $targetDir)) {
        New-Item -ItemType Directory -Path $targetDir -Force | Out-Null
    }

    # Save as PNG
    $bmp.Save($TargetPath, [System.Drawing.Imaging.ImageFormat]::Png)
    $width = $bmp.Width
    $height = $bmp.Height
    $bmp.Dispose()

    Write-Host "[OK] Rendered: $resolvedInput -> $TargetPath ($width x $height)" -ForegroundColor Green
}

# Main execution
if ($All) {
    $baseDir = Split-Path -Parent $PSScriptRoot
    $topicsDir = Join-Path $baseDir "topics"
    if (-not (Test-Path $topicsDir)) {
        Write-Warning "Topics directory does not exist yet: $topicsDir"
        return
    }

    $fprgFiles = Get-ChildItem -Path $topicsDir -Filter "*.fprg" -Recurse
    if ($fprgFiles.Count -eq 0) {
        Write-Host "No .fprg files found in $topicsDir" -ForegroundColor Yellow
        return
    }

    Write-Host "Rendering $($fprgFiles.Count) flowchart(s)..." -ForegroundColor Cyan
    foreach ($file in $fprgFiles) {
        Render-SingleFlowchart -InputPath $file.FullName
    }
} elseif ($FprgPath) {
    Render-SingleFlowchart -InputPath $FprgPath -TargetPath $OutputPath
} else {
    Write-Host "Please provide -FprgPath or specify -All." -ForegroundColor Yellow
    Write-Host "Example: .\scripts\render_flowchart.ps1 -FprgPath `"topics\sequential-algorithms\teacher-example\solution.fprg`""
}
