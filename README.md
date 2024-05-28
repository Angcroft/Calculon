# CALCULON: CLI calculator written in C++

This calculator was made with the purpose of learning about C++, and made public for the people who is also interested in this programming language and wants to get some of the syntax of the code.
Calculon is mostly like the typical basic task when one is learning about programming, so it is suitable for beginners. This calculator offers a variety of mathematic operations, from basic, to trigonometric functions.
The offered operations and functions in here are as follows:
* Basic Operations: addition, substraction, multiplication, division.
* Advanced Operations: Exponents, roots, module, factorial, logarithm with a base in 10, natural logarithm, exponential.
* Trigonometric operations: sine, cosine, tangent, arcsine, arccosine, arctangente.

## Requisites
Obviously you'll need a C++ compiler and a development environment for running the code, like **g++** or **clang++** (I prefer the g++).

## Structure of project
The project consists of the main.cpp file, which contains almost all the logic and cli menus. The operations.cpp implements the mathematic functions,
and finally calculon.h, which worked as a way to declare the function and constants of the project (For the newbies, the .h is necessary for projects when you make another linked file to main).

## Instructions
Once you clone the repository and get the code locally, you have to enter the following command for the C++ compiler: "g++ -o calculon main.cpp operations.cpp". Once done you have to execute the program,
with "./calculon"

## How it works
When the program is executing, the first thing that will appear to you are the main options depending on the type of operation you want to perform, selected by the numeric characters.
1. Is for Basic Operations
2. Is for Advanced Operations
3. Is for trigonometric functions
4. Is for inverse trigonometric functions (arc)

### Example:
> select operation type:
> 1. Basic operations (+, -, *, /)
> 2. Advanced operations (power, roots, %, factorial, log, ln, exp)
> 3. Trigonometric operations (sin, cos, tan, asin, acos, atan)
> 4. Exit
(Imagine you select '1' as an example).
> Enter first number: 10
> select a basic operation:
> + : addition
> - : substraction
> * : multiplication
> / : division
(Imagine you select '+' as an example).
> Enter second number: 5
> The result is: 15

## About the use of this project
This project isn't intended for contributing, but you are completely free to take the code I made in here for your own projects.
Following the MIT License that I hereby grant to everybody who could benefit from the use of this code.
