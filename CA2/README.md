#DT211C/1 Programming Assignment #2
Due Date: Sunday, March 12th, 2017 (11.59pm) <br><br><br>

You are required to develop a program that will perform security authorisation based
on access codes. The access codes are 4 single-digit integer numbers between 0-9.
The program should allow a user to enter a code, encrypt the number and compare it
to an authorised access code. The program should also allow the user to decrypt an
encrypted code.<br><br>

When your program begins executing, the default authorised access code is 4523
(encrypted form of 1234 – see encryption algorithm below). This code must be stored
in a 1-D array called access_code and should not be changed. You should use a
different 1-D array to read the code entered by the user.<br><br>

Your program should be menu-driven and must display a simple menu when run. The
menu should include the following options: <br>
1. Enter code<br>
2. Encrypt code and verify if correct (i.e., matches authorised access code)<br>
3. Decrypt code<br>
4. Display the number of times the code was entered (i) Successfully (ii)
Incorrectly<br>
5. Exit Program<br>
<br><br>

Note:<br>
• Each menu option must be implemented in a separate function, i.e.
modularized.<br>
• All functions must pass parameters using Pass by Reference. Do NOT pass
parameters using pass by value.<br>
• All reading and writing to/from arrays must use pointer notation - not
subscript notation (i.e. using [ ])<br>
<br><br>

#Requirements:
(Each implemented in a separate function):<br>
1. Enter 4 single-digit integers. Perform any necessary validation (errorchecking).<br>
2. Encrypt the code entered. You should use the following algorithm to encrypt
the 4 single-digit integers:<br>
<br>
Encryption Algorithm:<br>
- Swap the 1st number with the 3rd number.<br>
- Swap the 2nd number with the 4th number.<br>
- Add 1 to each number.<br>
- If any number has a value equal to 10, change this value to 0. <br>

3. Compare the encrypted number from step 2 with the access code (4523) stored
in the 1-D array called access_code. If the 2 codes match, display a message
saying CORRECT CODE. If the 2 codes do not match, display a message
saying ERROR CODE.<br>
4. Provide an option to allow a user to decrypt an encrypted code. You should
use the following algorithm to decrypt the encrypted code only:<br>
Decryption Algorithm:<br>
- Subtract 1 from each number.<br>
- If any number has a value equal to -1, change this value to 9.<br>
- Swap the 1st number with the 3rd number.<br>
- Swap the 2nd number with the 4th number.<br>
<br><br>
5. Count the number of times a user entered a correct/incorrect code after it is
encrypted and compared to the access code in each run of the program.<br>
6. The program should terminate gracefully<br>

#Features to include
• After each option has finished, your program should return to the main menu
and allow the user to select another option.<br>
• The user should only be allowed to encrypt their code (i.e. select option 2) if
the code is NOT already encrypted.<br>
• The user should only be allowed to decrypt their code (i.e. select option 3) if
the code IS already encrypted.<br>
• Only encrypted codes should be compared with the access-code (option 2).<br>
• Display appropriate error messages to handle any errors<br>

#Submit your program using Webcourses. This must be submitted on or before Sunday, March 12th, 2017 (11.59pm).
