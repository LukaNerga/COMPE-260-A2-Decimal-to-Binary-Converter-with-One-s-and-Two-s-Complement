COMPE-260 Assignment 1

Decimal to Binary Converter with One's and Two's Complement

Author: Luka Nergadze
Language: C++

Description:

This C++ program converts a user-provided decimal number to its binary representation and computes its One's and Two's complements.

Key features:

User specifies a bit size (4, 8, 16, 32, or 64)

Validates input and checks if bit size is sufficient

Converts decimal → binary

Calculates One's complement (flip all bits)

Calculates Two's complement (One’s complement + 1)

Allows repeated calculations or exit

The program demonstrates basic bit manipulation techniques and helps understand binary number representation.

How to Use

Clone or download this repository.

Compile the program using a C++ compiler, for example:

g++ -o binary_calculator main.cpp


Run the executable:

./binary_calculator


Follow the prompts to:

Enter a decimal number

Select a bit size (4, 8, 16, 32, 64)

View the binary, One's complement, and Two's complement outputs

Repeat or quit

Example Output
Binary Calculator
Please indicate any decimal number: 10
In what bit system do you want to output your number (e.g., 4/8/16/32/64): 8
Your number in binary will be: 00001010
Your number in One's complement will be: 11110101
Your number in Two's complement will be: 11110110

Code File

main.cpp — main program containing all functions: input validation, decimal-to-binary conversion, One’s complement, Two’s complement

Features Highlight

Dynamic memory allocation for binary arrays

Pointer usage for array manipulation

Input validation for bit sizes and decimal values

Loops allow continuous use until user exits

License

This project is open-source and free to use for learning and academic purposes.
