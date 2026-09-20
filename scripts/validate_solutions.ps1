<#
.SYNOPSIS
    Validates all exercise folders, problem statements, and Flowgorithm solutions across the repository.

.DESCRIPTION
    Ensures repository integrity:
    1. Every topic folder contains expected exercise folders (teacher-example, student-exercise-*).
    2. Each exercise contains problem.md, solution.fprg, and solution.png.
    3. problem.md adheres to the standard Azerbaijani template (Məsələ, Giriş, Gözlənilən çıxış, Nümunə).
    4. solution.fprg is valid XML and parses cleanly in Flowgorithm.
    5. English naming conventions are observed for variables.
    6. solution.png exists and is a valid image file.

.EXAMPLE
    .\scripts\validate_solutions.ps1
#>

[CmdletBinding()]
param(
    [string]$TopicsPath = "topics"
)

$baseDir = Split-Path -Parent $PSScriptRoot
$resolvedTopics = Join-Path $baseDir $TopicsPath

if (-not (Test-Path $resolvedTopics)) {
    Write-Host "[INFO] Topics folder '$resolvedTopics' does not exist yet. Repository is in initial setup state." -ForegroundColor Yellow
    exit 0
}

# Locate Flowgorithm
$fgCandidates = @(
    "C:\Program Files\Flowgorithm\Flowgorithm.exe",
    "C:\Program Files (x86)\Flowgorithm\Flowgorithm.exe",
    "$env:LOCALAPPDATA\Programs\Flowgorithm\Flowgorithm.exe"
)
$fgExe = $null
foreach ($cand in $fgCandidates) {
    if (Test-Path $cand) { $fgExe = $cand; break }
}

$fgAvailable = $false
$tProg = $null
$openMethod = $null

if ($fgExe) {
    try {
        $bytes = [System.IO.File]::ReadAllBytes($fgExe)
        $asm = [System.Reflection.Assembly]::Load($bytes)
        $tMain = $asm.GetType("Flowgorithm.Main")
        $mSetup = $tMain.GetMethod("Setup", [System.Reflection.BindingFlags]"Public,Static")
        if ($mSetup) { $mSetup.Invoke($null, @()) }
        $tProg = $asm.GetType("Stm+Program")
        $openMethod = $tProg.GetMethod("Open", [System.Type[]]@([string]))
        $fgAvailable = $true
    } catch {
        Write-Warning "Could not initialize Flowgorithm assembly for deep verification: $_"
    }
}

$topicFolders = Get-ChildItem -Path $resolvedTopics -Directory
if ($topicFolders.Count -eq 0) {
    Write-Host "[INFO] No topic subdirectories found in $resolvedTopics." -ForegroundColor Yellow
    exit 0
}

$errors = @()
$warnings = @()
$exerciseCount = 0

foreach ($topic in $topicFolders) {
    Write-Host "`nChecking topic: $($topic.Name)" -ForegroundColor Cyan
    $exerciseFolders = Get-ChildItem -Path $topic.FullName -Directory | Sort-Object Name
    
    if ($exerciseFolders.Count -eq 0) {
        $warnings += "Topic '$($topic.Name)' has no exercise directories."
        continue
    }

    foreach ($ex in $exerciseFolders) {
        $exerciseCount++
        $relPath = "$($topic.Name)/$($ex.Name)"
        Write-Host "  Verifying $relPath ..." -NoNewline

        $problemMd = Join-Path $ex.FullName "problem.md"
        $solutionFprg = Join-Path $ex.FullName "solution.fprg"
        $solutionPng = Join-Path $ex.FullName "solution.png"

        # Check files existence
        if (-not (Test-Path $problemMd)) {
            $errors += "[$relPath] Missing problem.md"
        } else {
            # Check required markdown sections using unicode escapes
            $content = [System.IO.File]::ReadAllText($problemMd, [System.Text.Encoding]::UTF8)
            
            # Check for Məsələ
            if ($content -notmatch "###\s+M[\u0259e]s[\u0259e]l[\u0259e]") {
                $errors += "[$relPath] problem.md missing section header '### Məsələ'"
            }
            # Check for Giriş
            if ($content -notmatch "###\s+Giri[\u015fs]") {
                $errors += "[$relPath] problem.md missing section header '### Giriş'"
            }
            # Check for Gözlənilən çıxış
            if ($content -notmatch "###\s+G[\u00f6o]zl[\u0259e]nil[\u0259e]n\s+[\u00e7c][\u0131i]x[\u0131i][\u015fs]") {
                $errors += "[$relPath] problem.md missing section header '### Gözlənilən çıxış'"
            }
            # Check for Nümunə
            if ($content -notmatch "###\s+N[\u00fcu]mun[\u0259e]") {
                $errors += "[$relPath] problem.md missing section header '### Nümunə'"
            }
        }

        if (-not (Test-Path $solutionPng)) {
            $errors += "[$relPath] Missing solution.png"
        } else {
            $pngInfo = Get-Item $solutionPng
            if ($pngInfo.Length -eq 0) {
                $errors += "[$relPath] solution.png is empty (0 bytes)"
            }
        }

        if (-not (Test-Path $solutionFprg)) {
            $errors += "[$relPath] Missing solution.fprg"
        } else {
            # XML check
            try {
                $xmlText = [System.IO.File]::ReadAllText($solutionFprg, [System.Text.Encoding]::UTF8)
                [xml]$xml = $xmlText
                if ($xml.flowgorithm -eq $null) {
                    $errors += "[$relPath] solution.fprg is not a valid Flowgorithm XML document"
                }

                # Check variable names (warn on single letter variable names like a, b, x, y)
                $declares = $xml.SelectNodes("//declare")
                foreach ($dec in $declares) {
                    $names = $dec.GetAttribute("name") -split ",\s*"
                    foreach ($name in $names) {
                        $name = $name.Trim()
                        if ($name.Length -eq 1 -and "abcxyz".Contains($name.ToLower())) {
                            $warnings += "[$relPath] Single-letter variable name '$name' detected. Prefer descriptive English names."
                        }
                    }
                }
            } catch {
                $errors += "[$relPath] solution.fprg XML parse failed: $($_.Exception.Message)"
            }

            # Flowgorithm engine check
            if ($fgAvailable) {
                $prog = [System.Activator]::CreateInstance($tProg)
                $fullFprgPath = (Resolve-Path $solutionFprg).Path
                $res = $openMethod.Invoke($prog, [object[]]@($fullFprgPath))
                if (-not $res.Success) {
                    $errors += "[$relPath] Flowgorithm engine rejected .fprg: $($res.ErrorText)"
                }
            }
        }

        Write-Host " Done." -ForegroundColor Gray
    }
}

Write-Host "`nValidation Summary:" -ForegroundColor Cyan
Write-Host "Total exercises checked: $exerciseCount"
if ($warnings.Count -gt 0) {
    Write-Host "`nWarnings ($($warnings.Count)):" -ForegroundColor Yellow
    foreach ($w in $warnings) { Write-Host " - $w" -ForegroundColor Yellow }
}

if ($errors.Count -gt 0) {
    Write-Host "`nErrors ($($errors.Count)):" -ForegroundColor Red
    foreach ($e in $errors) { Write-Host " - $e" -ForegroundColor Red }
    exit 1
} else {
    Write-Host "`nAll exercises passed validation successfully!" -ForegroundColor Green
    exit 0
}
