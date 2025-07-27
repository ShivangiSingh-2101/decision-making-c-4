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
