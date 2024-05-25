#include <iostream>
#include <cmath>

using namespace std;

int main ()
{
    //  Define variables
    string operation;
    double number1, number2;

    //  Get user input
    cout << "Enter first number: ";
    cin >> number1;
    cout << "Enter operation (+, -, *, /): ";
    cin >> operation;
    cout << "Enter second number: ";
    cin >> number2;

    //  If else statement checking entered operation
    if (operation == "+") {
        cout << number1 + number2;
    } else if (operation == "-") {
        cout << number1 - number2;
    } else if (operation == "*") {
        cout << number1 * number2;
    } else if (operation == "/") {
        cout << number1 / number2;
    } else {
        cout << "Sorry dude, wrong input...";
    }

    return 0;
}