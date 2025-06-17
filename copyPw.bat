@echo off
set /p fileName="Enter file to decrypt (no file extension):"
gpg -o temp -d %fileName%.asc
type temp | clip 
del temp
PAUSE
cmd /c echo off | clip