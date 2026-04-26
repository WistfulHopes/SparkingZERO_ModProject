@echo off
REM Build BPPropertyNullFix - requires Visual Studio with C++ workload
REM Adjust paths below if your VS installation differs

for /f "usebackq tokens=*" %%i in (`"%ProgramFiles(x86)%\Microsoft Visual Studio\Installer\vswhere.exe" -latest -find "VC\Tools\MSVC\*\bin\Hostx64\x64" -sort`) do set "VCBIN=%%i"
if not defined VCBIN (
    echo ERROR: Could not find MSVC compiler
    exit /b 1
)

set "PATH=%VCBIN%;%PATH%"
for /f "usebackq tokens=*" %%i in (`"%ProgramFiles(x86)%\Microsoft Visual Studio\Installer\vswhere.exe" -latest -property installationPath`) do set "VSDIR=%%i"

call "%VSDIR%\VC\Auxiliary\Build\vcvars64.bat" >/dev/null 2>&1

cd /d "%~dp0"
cl /nologo /LD /O2 /GS- main.cpp /link /NODEFAULTLIB /ENTRY:DllMain kernel32.lib /OUT:Release\BPPropertyNullFix.asi /DLL
if exist Release\BPPropertyNullFix.asi (
    echo.
    echo BUILD SUCCESS: Release\BPPropertyNullFix.asi
) else (
    echo BUILD FAILED
)
