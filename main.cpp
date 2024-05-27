#include <iostream>
#include <cmath>
#include <limits>

#include "calculon.h"
#include "operations.cpp"

using namespace std;

// Result
void showResults(double result) {
    cout << "The result is: " << result << endl;
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
    int opType;
    char operation;
    double number1, number2;
    bool validOpType = false;
    bool validOp = false;

    // Get first number
    number1 = getValid("Enter first number: ");

    //  Type of operation verification
    do {
        cout << "Input what kind of operation you want: ";
        if (cin >> opType && (opType == 1 || opType == 2)) {
            validOpType = true;
        } else {
            cout << "Invalid operation type. Please enter a correct operation type: " << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    } while (!validOpType);

        if (opType == 1) {
            //  Basic operations
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
        } else if (opType == 2) {
            //  Advanced operations
            cout << "Input the operation ((^)p, (r)oots, (%)module, (!)factorial, l(10), n(natural), e): " << endl;
            cin >> operation;

            switch (operation) {
                case 'p':
                case 'r':
                case '%':
                case '!':
                case 'l':
                case 'n':
                case 'e':
                    validOp = true;
                    break;
                default:
                    cout << "Invalid operation. Please enter a correct operation ((^)p, (r)oots, (%)module, (!)factorial, l(10), n(natural), e): " << endl;
            }
        } else if (opType == 3) {
            //  Trigonometric operation
            do {
                cout << "Input the operation ((s)ine, (c)osine, (t)an)";
                cin >> operation;

                switch (operation) {
                    case 's':
                    case 'c':
                    case 't':
                        validOp = true;
                        break;
                    default:
                        cout << "Invalid operation. Please enter a correct trigonometric operation ((s)ine, (c)osine, (t)an): " << endl;
                        cin.clear();
                        cin.ignore(numeric_limits<streamsize>::max(), '\n');
                }
            } while (!validOp);
        } else if (opType == 4) {
            //  Inverse trigonometric operation
            do {
                cout << "Input the operation ((a)sin, (b)acos, (c)atan): ";
                cin >> operation;

                switch (operation) {
                    case 'a':
                    case 'b':
                    case 'c':
                        validOp = true;
                        break;
                    default:
                    cout << "Invalid operation. Please enter a correct inverse trigonometric operation ((a)sin, (b)acos, (c)atan): " << endl;
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                }
            } while (!validOp);
        }

    if (operation == '!') {
        //  When it is Factorial
        int intNumber1 = static_cast<int>(number1);
        showResults(factOp(intNumber1));
    } else if (operation == 'l') {
        //  Logarithm in 10
        showResults(logOp(number1));
    } else if (operation == 'n') {
        //  Natural Logarithm
        showResults(logOp(number1));
    } else if (operation == 'e') {
        //  Exponential
        showResults(exOp(number1));
    } else if (operation == 's') {
        //  Sine
        showResults(sinOp(number1));
    } else if (operation == 'c') {
        //  Cosine
        showResults(cosOp(number1));
    } else if (operation == 't') {
        //  Tangent
        showResults(tanOp(number1));
    } else {
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
            case 'p':
                showResults(powOp(number1, number2));
                break;
            case 'r':
                showResults(rootOp(number1, number2));
                break;
            case '%':
                showResults(modOp(number1, number2));
                break;
        }
    }

    return 0;
}