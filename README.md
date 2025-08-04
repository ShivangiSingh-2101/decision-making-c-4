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

- Start
- Declare an integer variable a.
- Prompt the user to enter a number.
- Read the number into variable a.
- If a == 0
- Print “The number is zero and it is even.”
- Else if a > 0
- If a % 2 == 0
- Print “The number is positive and even.”
- Else
- Print “The number is positive and odd.”
- Else (i.e., a < 0)
- If a % 2 == 0
- Print “The number is negative and even.”
- Else
- Print “The number is negative and odd.”
- End

- 
Program 5(2) 
Aim:
To write a C++ program that takes a character as input and checks whether it is a vowel or a consonant.

 Theory
In the English alphabet, the vowels are: a, e, i, o, u (bth lowercase and uppercase).
All other alphabetic characters are considered consonants.This program uses a simple if-else structure:
If the input matches any of the vowels (either lowercase or uppercase), it is identified as a vowel.
Otherwise, it is considered a consonant.

Algorithm:
- Start
- Declare a variable a of type char.
- Prompt the user to enter a character.
- Take input and store it in a.Check if a is one of the following characters: 'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'
- If yes, print "The character is a vowel."
- Else, print "The character is a consonant."
- End
Program 5(3)
Aim:
To write a C++ program that takes a number (1 to 12) as input and displays the corresponding month using a switch-case statement.
Theory:
The switch statement in C++ allows us to execute a block of code based on the value of a variable.
In this program:
The user enters a number between 1 to 12
The switch statement checks the number and prints the corresponding month.


 Algorithm:

 - Start
- Declare an integer variable choice.
- Display a prompt to the user to enter a number (1 to 12).
- Take user input.
- Use a switch statement:
- Case 1 → Print "January"
- Case 2 → Print "February"
...
- Case 12 → Print "December"
- Default → Print "INVALID CHOICE!!!!"
  - End


Program5(4)
Aim:
To create a C++ program that performs basic arithmetic operations (Addition, Subtraction, Multiplication, Division) using a switch case.

Theory:A calculator takes two numbers and performs an operation like +, -, *, or /.
switch-case is ideal when you have a fixed menu of operations.
This program uses integers a, b for inputs and c for operation choice.
It includes validation for division by zero using if (b != 0).

Algorithm:
- Start
- Declare three variables: a, b, c
- Prompt and input two numbers a and b
- Display a menu for operations:-
- 1 → Addition
- 2 → Subtraction
- 3 → Multiplication
- 4 → Division
- Input choice c
- Use switch(c):
- Case 1: Print a + b
- Case 2: Print a - b
- Case 3: Print a * b
- Case 4:
- If b ≠ 0, print a / b
- Else print "not defined"
- Default: Print "Enter Valid option"
- End

Program 5(5)

Aim:
To write a C++ program that finds the largest number among three using if-else statements.

 Theory:To compare three numbers (a, b, and c), you can use nested if-else statements.
This avoids using inbuilt functions and helps understand control flow.
The program stores the result in a variable largest and prints it.

 Algorithm:
- Start
- Declare variables a, b, c, and largest
- Input three numbers
- Compare:
- If a >= b:
- If a >= c, largest = a
- Else, largest = c
- Else:
- If b >= c, largest = b
- Else, largest = c
- Print the largest number
- End
