# CALCULON: CLI calculator written in C++

## Introduction
This calculator was made with the purpose of learning about C++, and is made public for people who is also interested in this programming language and wants to understand some of the syntax. Calculon is similar to the typical basic task when one is learning about programming, so it is suitable for beginners. This calculator offers a variety of mathematic operations, from basic, to trigonometric functions. The offered operations and functions in here are as follows:
* **Basic Operations**: addition, substraction, multiplication, division.
* **Advanced Operations**: Exponents, roots, module, factorial, logarithm with a base in 10, natural logarithm, exponential.
* **Trigonometric functions**: sine, cosine, tangent, arcsine, arccosine, arctangente.

## Requisites
You'll need a C++ compiler and a development environment to run the code, such as **g++** or **clang++** (I used g++ in this case).

## Structure of project
The project consists of the main.cpp file, which contains almost all the logic and CLI menus. The operations.cpp implements the mathematic functions,
and finally calculon.h, which declares the functions and constants of the project (For the newbies, the .h file is necessary for projects when you make another one linked to main).

## Instructions
Once you clone the repository a download the code locally, enter with the following prompt to compile it: "g++ -o calculon main.cpp operations.cpp. Once done run the program with "./calculon".

## How it works
When the program is executed, you will see the main options depending on the type of operation you want to perform, selected by numeric characters.
1. **Basic Operations** and choose from the following operations:
* addition ('+')
* substraction ('-')
* multiplication ('*')
* division ('/')

2. **Advanced Operations** and choose from the following operations:
* power ('p')
* root ('r')
* module ('%')
* factorial ('!')
* logarithm base 10 ('l')
* natural logarithm ('n')
* exponential ('e')

3. **Trigonometric Functions** and choose from the following operations:
* sine ('s')
* cosine ('c')
* tangent ('t')

4. **Inverse Trigonometric Functions** and choose from the following operations:
* arcsine ('a')
* arccosine ('A')
* arctangent ('T')

5. **Exit** to just leave the program.

### Example:
Example for basic operations:
Select operation type:
1. Basic operations (+, -, *, /)
2. Advanced operations (power, roots, %, factorial, log, ln, exp)
3. Trigonometric operations (sin, cos, tan, asin, acos, atan)
4. Exit
1
Enter first number: 10
Select a basic operation:
+ : Addition
- : Subtraction
* : Multiplication
/ : Division
+
Enter second number: 5
The result is: 15

Example for advanced operations:
Select operation type:
1. Basic operations (+, -, *, /)
2. Advanced operations (power, roots, %, factorial, log, ln, exp)
3. Trigonometric operations (sin, cos, tan, asin, acos, atan)
4. Exit
2
Enter the number: 5
Select an advanced operation:
p : Power
r : Roots
% : Modulo
! : Factorial
l : Log base 10
n : Natural log
e : Exponential
!
The result is: 120

Example for trigonometric functions:
Select operation type:
1. Basic operations (+, -, *, /)
2. Advanced operations (power, roots, %, factorial, log, ln, exp)
3. Trigonometric operations (sin, cos, tan, asin, acos, atan)
4. Exit
3
Enter the angle/value: 1
Select a trigonometric operation:
s : Sine
c : Cosine
t : Tangent
s
The result is: 0.841471

## About the use of this project
This project isn't intended for contributions, but you are completely free to use the code for your own projects. Following the MIT License,
I hereby grant everyone who could benefit from the use of this code the freedom to do so.
