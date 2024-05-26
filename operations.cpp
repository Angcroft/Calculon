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