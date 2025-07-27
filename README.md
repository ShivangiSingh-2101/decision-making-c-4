Program 5(1)
 Aim:
To write a C++ program to check whether the given number is positive, negative, or zero, and also determine whether it is even or odd.

 Theory:
A number can be categorized based on two properties:
Sign of the number:
Positive if the number is greater than 0.
Negative if the number is less than 0.
Zero if the number is 0.
Parity (Even or Odd):
A number is even if it is divisible by 2 (i.e., number % 2 == 0).
A number is odd if it leaves a remainder 1 when divided by 2 (i.e., number % 2 != 0).
Using conditional statements (if-else), we can classify the number based on these two properties.


Algorithm:

Start
Declare an integer variable a.
Prompt the user to enter a number.
Read the number into variable a.
If a == 0
Print “The number is zero and it is even.”
Else if a > 0
If a % 2 == 0
Print “The number is positive and even.”
Else
Print “The number is positive and odd.”
Else (i.e., a < 0)
If a % 2 == 0
Print “The number is negative and even.”
Else
Print “The number is negative and odd.”
End
Program 5(2) 
Aim:
To write a C++ program that takes a character as input and checks whether it is a vowel or a consonant.

 Theory
In the English alphabet, the vowels are: a, e, i, o, u (bth lowercase and uppercase).
All other alphabetic characters are considered consonants.This program uses a simple if-else structure:
If the input matches any of the vowels (either lowercase or uppercase), it is identified as a vowel.
Otherwise, it is considered a consonant.

Algorithm:
Start
Declare a variable a of type char.
Prompt the user to enter a character.
Take input and store it in a.Check if a is one of the following characters: 'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'
If yes, print "The character is a vowel."
Else, print "The character is a consonant."
End

