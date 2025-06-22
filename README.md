Free to use password manager with GPG encryption with ascii armoring for Windows only.

NOTE: For frequent encrypt/decrypt usage, hardcoding gpg username in the batch files will be better. 

## Features:
  - Password generator includes alphanumeric as well as some special characters.
  - Batch files created to perform encryption / decryption and automatically save to your clipboard.
  - Close command line window to easily clear clipboard.

## Prerequisites:
1. GPG commands installed in command line terminal.
2. GPG Public / Private key pairing setup (account).
3. Clone / download as ZIP this repository.

## Usage:

### Create password: 
1. Click on "makePw.bat".
2. Enter password length, and a randomized password will be generated.
3. Enter y to save the password, n to specify length and generate another password. 
4. Enter filename, then enter gpg username.
5. Login to GPG user.
6. Encrypted file will now be created.

### Decrypt and Copy Password:
1. Click on "copyPw.bat".
2. Enter filename of encrypted file (exclude .asc in input).
3. Login to GPG user.
4. Password will now be copied to your clipboard. 
5. Close command line terminal to clear clipboard.

### Create and copy password to clipboard: 
1. Click on "makeAndCopyPw.bat". 
2. Follow steps from "Create password" section. 
3. Password will be copied to your clipboard. 
4. Close command line terminal to clear clipboard.

##### Manually Encrypt Files:
gpg -s -e -a -r \<user> \<file>
-s = sign
-e = encrypt
-a = ascii armor
-r = recipient

##### Manually Decrypt Files:
gpg -o \<output_file> -d \<file>
-o = output
-d = decrypt
