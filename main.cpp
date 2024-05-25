#include <iostream>
#include <cmath>
#include <limits>

using namespace std;

// Result
void showResults(double result) {
    cout << "The result is: " << result << endl;
}

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

// Verifies input validation
double getValid(const string& prompt) {
    double number;
    while (true) {
        cout << prompt;
        if (cin >> number) {
            return number;
        } else {
            cout << "Invalid input. Please enter a valid number." << endl;
            cin.clear(); // Clean incorrect input
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discards incorrect input
        }
    }
}

// Main function
int main() {
    // Main variables
    char operation;
    double number1, number2;
    bool validOp = false;

    // Get first number
    number1 = getValid("Enter first number: ");

    // Operation symbol verification
    do {
        cout << "Input the operation (+, -, *, /): ";
        cin >> operation;

        switch (operation) {
            case '+':
            case '-':
            case '*':
            case '/':
                validOp = true;
                break;
            default:
                cout << "Invalid operation. Please enter a correct operation (+, -, *, /): " << endl;
        }
    } while (!validOp);

    // Get second number
    number2 = getValid("Enter second number: ");

    // Make op and show results
    switch (operation) {
        case '+':
            showResults(addOp(number1, number2));
            break;
        case '-':
            showResults(subsOp(number1, number2));
            break;
        case '*':
            showResults(multiOp(number1, number2));
            break;
        case '/':
            showResults(divOp(number1, number2));
            break;
    }

    return 0;
}