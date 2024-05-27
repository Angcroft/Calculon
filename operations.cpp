#include <iostream>
#include <cmath>

#include "calculon.h"

using namespace std;

// Addition
double addOp(double a, double b) {
    return a + b;
}

// Sustraction
double subsOp(double a, double b) {
    return a - b;
}

// Multiplication
double multiOp(double a, double b) {
    return a * b;
}

// Division
double divOp(double a, double b) {
    if (b == 0) {
        cout << "Error: Division by zero is forbidden." << endl;
        return NAN; // Not A Number
    }
    return a / b;
}

//  Exponents
double powOp(double base, double exponent) {
    return pow(base, exponent);
}

//  Roots
double rootOp(double radicand, double index) {
    if (index == 0) {
        cout << "Error: Root index cannot be zero." << endl;
    }

    if (radicand < 0 && fmod(index, 2) == 0) {
        cout << "Error: cannot calculate even root of a negative number." << endl;
        return NAN; //   NotANumber
    }
    return pow(radicand, 1.0 / index);
}

//  Module
double modOp(double a, double b) {
    if (b == 0) {
        cout << "Error: Division by zero is forbidden." << endl;
        return NAN; //  NotANumber
    }
    return fmod(a, b);
}

//  Factorial
unsigned long long factOp(int n) {
    if (n < 0) {
        cout << "Error: Factorial of a negative number is undefined." << endl;
        return 0;
    }
    unsigned long long result = 1;
    for (int i = 1; i <= n; ++i) {
        if (result > numeric_limits<unsigned long long>::max() / i) {
            cout << "Error: Factorial result is too large." << endl;
            return 0;
        }
        result *= i;;
    }
    return result;
}

double logOp(double a) {
    if (a <= 0) {
        cout << "Error: logarithm of non-positive numbers is undefined." << endl;
        return NAN; //  NotANumber
    }
    return log10(a);
}

double lnOp(double a) {
    if (a <= 0) {
        cout << "Error: Logarithm of non-positive numbers is undefined." << endl;
        return NAN; //  NotANumber
    }
    return log(a);
}

double exOp(double a) {
    return exp(a);
}