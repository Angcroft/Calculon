#include <iostream>
#include <cmath>

using namespace std;

//  Function for showing results
void showResults(double result) {
    cout << "The result is: " << result << endl;
}

//  Function for adding two numbers
double addOp(double a, double b) {
    return a + b;
}

//  Function for substracting two numbers
double subsOp(double a, double b) {
    return a - b;
}

//  Function for multiplicating two numbers
double multiOp(double a, double b) {
    return a * b;
}

//  Function for dividing two numbers with division by zero management
double divOp(double a, double b) {
    if (b == 0) {
        cout << "Error: Division by zero is forbidden." << endl;
        return NAN; //  Just NotANumber
    }

    return a / b;
}

//  Main function
int main ()
{
    //  Define variables
    char operation;
    double number1, number2;

    //  Get user input
    cout << "Enter first number: ";
    while(!(cin >> number1)) {
        //  Invalids if wrong input
        cout << "Invalid. Please enter a correct input: ";
        cin.clear();    //  Clear the input
        cin.ignore(numeric_limits<streamsize>::max(), '/n');    //  Discard the invalid input
    }

    cout << "Input the operation (+, -, *, /): ";
    cin >> operation;

    cout << "Input the second number: ";
    while(!(cin >> number2)) {
        //  Invalids if wrong input
        cout << "Invalid. Please enter a correct input: ";
        cin.clear();    //  Clear the input
        cin.ignore(numeric_limits<streamsize>::max(), '/n');    //      Discard the invalid input
    }

    //  If operation char is correct, proceed with Switch
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
        default:
            cout << "Invalid operation. Please enter a correct operation (+, -, *, /): " << endl;
    }

    return 0;
}