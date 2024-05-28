#include <iostream>
#include <cmath>
#include <limits>

#include "calculon.h"
#include "operations.cpp"

using namespace std;

// Result
void showResults(double result) {
    if (isnan(result)) {
        cout << "An error occured during the calculation." << endl;
    } else {
        cout << "The result is: " << result <<endl;
    }
}

//  Overloaded showResults for factorial
void showResults(unsigned long long result) {
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

void showMainMenu() {
    cout << "\nSelect operation type: " << endl;
    cout << "1. Basic Operations" << endl;
    cout << "2. Advanced Operations" << endl;
    cout << "3. Trigonometric functions" << endl;
    cout << "4. Inversed trigonometric functions" << endl;
    cout << "5. Exit" << endl;
}

void showBasicOp() {
    cout << "\nSelect a basic operation:" << endl;
    cout << "+ : addition" << endl;
    cout << "- : substraction" << endl;
    cout << "* : multiplication" << endl;
    cout << "/ : division" << endl;
}

void showAdOp() {
    cout << "\nSelect an advanced operation:" << endl;
    cout << "p : power" << endl;
    cout << "r : roots" << endl;
    cout << "% : module" << endl;
    cout << "! : factorial" << endl;
    cout << "l : log base 10" << endl;
    cout << "n : natural log" << endl;
    cout << "e : exponential" << endl;
}

void showTrigFun() {
    cout << "\nSelect a trigonometric function:" << endl;
    cout << "s : sine" << endl;
    cout << "c : cosine" << endl;
    cout << "t : tangent" << endl; 
}

void showInTrigFun() {
    cout << "\nSelect an inversed trigonometric function:" << endl;
    cout << "a : arc sine" << endl;
    cout << "A : arc cosine" << endl;
    cout << "T : arc tangent" << endl;
}

// Main function
int main() {
    while (true) {
        showMainMenu();
        int opType;
        if (!(cin >> opType) || opType < 1 || opType > 5) {
            cout << "Invalid operation type. Please enter a correct operation type: " << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }

        if (opType == 5) {
            cout << "Exiting the program." << endl;
            break;
        }

        double number1 = 0, number2 = 0;
        char operation;
        bool validOp = false;

        if (opType == 1) {
            number1 = getValid("Enter first number: ");
            showBasicOp();
            cin >> operation;

            switch (operation) {
                case '+':
                case '-':
                case '*':
                case '/':
                    validOp = true;
                    number2 = getValid("Enter second number: ");
                    break;
                default:
                    cout << "Invalid operation. Please enter a correct operation: " << endl;
                    cout << "+ : addition" << endl;
                    cout << "- : substraction" << endl;
                    cout << "* : multiplication" << endl;
                    cout << "/ : division" << endl;
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }

            if (validOp) {
                double result;
                switch (operation) {
                    case '+': result = addOp(number1, number2); break;
                    case '-': result = subsOp(number1, number2); break;
                    case '*': result = multiOp(number1, number2); break;
                    case '/': result = divOp(number1, number2); break;
                }
                showResults(result);
            }
        } else if (opType == 2) {
            number1 = getValid("Enter the number: ");
            showAdOp();
            cin >> operation;

            switch (operation) {
                case 'p':
                case 'r':
                case '%':
                    validOp = true;
                    number2 = getValid("Enter second number: ");
                    break;
                case '!':
                case 'l':
                case 'n':
                case 'e':
                    validOp = true;
                    break;
                default:
                    cout << "Invalid operation. Please enter a correct operation: " << endl;
                    cout << "p : power" << endl;
                    cout << "r : roots" << endl;
                    cout << "% : module" << endl;
                    cout << "! : factorial" << endl;
                    cout << "l : log base 10" << endl;
                    cout << "n : natural log" << endl;
                    cout << "e : exponential" << endl;
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }

            if (validOp) {
                double result;
                switch (operation) {
                    case 'p': result = powOp(number1, number2); break;
                    case 'r': result = rootOp(number1, number2); break;
                    case '%': result = modOp(number1, number2); break;
                    case '!': result = factOp(static_cast<int>(number1)); break;
                    case 'l': result = logOp(number1); break;
                    case 'n': result = lnOp(number1); break;
                    case 'e': result = exOp(number1); break;
                }
                showResults(result);
            }
        } else if (opType == 3) {
            number1 = getValid("Enter the angle/value: ");
            showTrigFun();
            cin >> operation;

            switch (operation) {
                case 's':
                case 'c':
                case 't':
                    validOp = true;
                    break;
                default:
                    cout << "Invalid operation. Please enter a correct operation: " << endl;
                    cout << "s : sine" << endl;
                    cout << "c : cosine" << endl;
                    cout << "t : tangent" << endl; 
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }

            if (validOp) {
                double result;
                switch (operation) {
                    case 's': result = sinOp(number1); break;
                    case 'c': result = cosOp(number1); break;
                    case 't': result = tanOp(number1); break;
                }
                showResults(result);
            }
        } else if (opType == 4) {
            number1 = getValid("Enter the angle/value: ");
            showInTrigFun();
            cin >> operation;

            switch (operation) {
                case 'a':
                case 'A':
                case 'T':
                    validOp = true;
                    break;
                default:
                    cout << "Invalid function. Please enter a correct function" << endl;
                    cout << "a : arc sine" << endl;
                    cout << "A : arc cosine" << endl;
                    cout << "T : arc tangent" << endl;
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }

            if (validOp) {
                double result;

                switch (operation) {
                    case 'a': result = asinOp(number1); break;
                    case 'A': result = acosOp(number1); break;
                    case 'T': result = atanOp(number1); break;
                }
                showResults(result);
            }
        }

    }

    return 0;
}