"generator/Generate Password.exe"
set /p fileName="Enter file that was made: "
set /p gpgAccount="Enter gpg account username: "
gpg -s -e -a -r %gpgAccount% %fileName%
del %fileName%