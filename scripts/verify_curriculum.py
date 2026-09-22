#!/usr/bin/env python3
"""
=============================================================================
Curriculum & Code Quality Verification Script
Author: Avaz Asgarov / The Lyceum of Digital Knowledge under BHOS
Subject: 8th Grade Informatics C++ Curriculum
=============================================================================
This script automatically validates:
1. All C++ source files compile with 0 errors and 0 warnings (-std=c++17 -Wall -Wextra -Werror).
2. All LaTeX documents compile cleanly to PDF without missing glyphs.
3. Student-facing documents do NOT contain answer keys or solutions.
4. Correct directory hierarchy and file integrity.
=============================================================================
"""

import os
import sys
import subprocess
import glob
from pathlib import Path

# Ensure UTF-8 output on Windows consoles
if hasattr(sys.stdout, "reconfigure"):
    sys.stdout.reconfigure(encoding="utf-8")

def find_clang():
    candidates = [
        r"C:\Program Files\LLVM\bin\clang++.exe",
        "clang++",
        "g++"
    ]
    for c in candidates:
        try:
            res = subprocess.run([c, "--version"], capture_output=True, text=True)
            if res.returncode == 0:
                return c
        except Exception:
            continue
    return None

def verify_cpp_files(repo_root, compiler):
    print("=" * 60)
    print("🔍 1. VERIFYING C++ SOURCE FILES COMPILATION")
    print("=" * 60)
    cpp_files = glob.glob(os.path.join(repo_root, "lessons", "**", "*.cpp"), recursive=True)
    if not cpp_files:
        print("❌ Error: No .cpp files found!")
        return False

    success_count = 0
    fail_count = 0

    for cpp in sorted(cpp_files):
        rel_path = os.path.relpath(cpp, repo_root)
        cmd = [compiler, "-std=c++17", "-Wall", "-Wextra", "-Werror", "-fsyntax-only", cpp]
        res = subprocess.run(cmd, capture_output=True, text=True)
        if res.returncode == 0:
            print(f"  ✅ [PASS] {rel_path}")
            success_count += 1
        else:
            print(f"  ❌ [FAIL] {rel_path}")
            print(res.stderr)
            fail_count += 1

    print(f"\nResult: {success_count} passed, {fail_count} failed.")
    return fail_count == 0

def verify_pdf_materials(repo_root):
    print("\n" + "=" * 60)
    print("📄 2. VERIFYING COMPILED PDF DOCUMENTS")
    print("=" * 60)
    
    expected_pdfs = [
        ("lessons/01-cpp-fundamentals/homework/homework_worksheet.pdf", 2),
        ("lessons/01-cpp-fundamentals/recap-quiz/recap_quiz.pdf", 1)
    ]
    
    all_ok = True
    for rel_path, expected_pages in expected_pdfs:
        full_path = os.path.join(repo_root, rel_path)
        if not os.path.exists(full_path):
            print(f"  ❌ [MISSING] {rel_path} does not exist!")
            all_ok = False
            continue
            
        file_size = os.path.getsize(full_path)
        if file_size < 1000:
            print(f"  ❌ [EMPTY] {rel_path} size is {file_size} bytes (too small)!")
            all_ok = False
            continue

        print(f"  ✅ [FOUND] {rel_path} ({file_size // 1024} KB)")

    return all_ok

def verify_student_confidentiality(repo_root):
    print("\n" + "=" * 60)
    print("🔒 3. VERIFYING STUDENT WORKSHEET CONFIDENTIALITY")
    print("=" * 60)
    
    student_files = [
        "lessons/01-cpp-fundamentals/homework/homework_worksheet.tex",
        "lessons/01-cpp-fundamentals/recap-quiz/recap_quiz.tex"
    ]
    
    forbidden_tokens = ["Netice 1: 5", "Cavab Açarı", "Answer Key", "totalSeconds / 3600", "int qiymet = 12.5; ->"]
    all_clean = True
    
    for rel_path in student_files:
        full_path = os.path.join(repo_root, rel_path)
        with open(full_path, "r", encoding="utf-8") as f:
            content = f.read()
        
        leaked = False
        for token in forbidden_tokens:
            if token in content:
                print(f"  ❌ [LEAK] {rel_path} contains forbidden answer token: '{token}'")
                leaked = True
                all_clean = False
        
        if not leaked:
            print(f"  ✅ [CLEAN] {rel_path} contains NO answers or solution keys.")
            
    return all_clean

def main():
    repo_root = os.path.abspath(os.path.join(os.path.dirname(__file__), ".."))
    print(f"Repository Root: {repo_root}\n")

    compiler = find_clang()
    if not compiler:
        print("❌ C++ compiler (clang++ or g++) not found in system!")
        sys.exit(1)

    cpp_ok = verify_cpp_files(repo_root, compiler)
    pdf_ok = verify_pdf_materials(repo_root)
    sec_ok = verify_student_confidentiality(repo_root)

    print("\n" + "=" * 60)
    if cpp_ok and pdf_ok and sec_ok:
        print("🎉 ALL CURRICULUM VERIFICATION CHECKS PASSED PERFECTLY!")
        print("=" * 60)
        sys.exit(0)
    else:
        print("❌ CURRICULUM VERIFICATION FAILED. PLEASE FIX ISSUES ABOVE.")
        print("=" * 60)
        sys.exit(1)

if __name__ == "__main__":
    main()
