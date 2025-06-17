@echo off
"generator/Generate Password.exe"
set /p fileName="Enter file that was made: "
set /p gpgAccount="Enter gpg account username: "
gpg -s -e -a -r %gpgAccount% %fileName%
del %fileName%
gpg -o temp -d %fileName%.asc
type temp | clip
del temp
PAUSE
cmd /c echo off | clip