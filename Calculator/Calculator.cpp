#include <iostream>
#include <cmath>

using namespace std;

int main() {
    // Define variables
    string operation;
    double number1, number2, result;

    // Get user input
    cout << "Enter First Number: ";
    cin >> number1;

    cout << "Enter Operation (+, -, *, /, pow, log, sin, cos): ";
    cin >> operation;

    // Advanced operations
    if (operation == "pow") {
        // Power operation
        cout << "Enter Exponent: ";
        double exponent;
        cin >> exponent;
        result = pow(number1, exponent);
    } else if (operation == "log") {
        // Logarithm operation
        cout << "Enter Base for Logarithm: ";
        double base;
        cin >> base;
        result = log(number1) / log(base);
    } else if (operation == "sin") {
        // Sin function
        result = sin(number1 * (M_PI / 180)); // Convert degrees to radians
    } else if (operation == "cos") {
        // Cos function
        result = cos(number1 * (M_PI / 180)); // Convert degrees to radians
    } else {
        cout << "NOT A RECOGNIZED OPERATION";
        
    
        cout << "Result: " <<result;
       
       
       
        return 0;
    }


    // Get the second number for basic operations
    cout << "Enter Second Number: (Not needed For Advanced Calculations) ";
    cin >> number2;

    // Basic operations
    if (operation == "+") {
        cout << "Result: " << number1 + number2;
    } else if (operation == "-") {
        cout << "Result: " << number1 - number2;
    } else if (operation == "*") {
        cout << "Result: " << number1 * number2;
    } else if (operation == "/") {
        if (number2 != 0) {
            cout << "Result: " << number1 / number2;
        } else {
            cout << "Cannot divide by zero.";
            return 0;
        }
    } else {
        cout << "NOT A RECOGNIZED OPERATION";
        return 0;
    }

    cout << "Result: " <<result;

    return 0;
}
