#include <iostream>
using namespace std;

int main() {
    double num1, num2, result;
    char op;

    cout << "Simple Calculator\n";
    cout << "Enter an operator (+, -, *, /): ";
    cin >> op;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    if (op == '+')
        result = num1 + num2;
    else if (op == '-')
        result = num1 - num2;
    else if (op == '*')
        result = num1 * num2;
    else if (op == '/') {
        if (num2 == 0)
            cout << "Error: Division by zero is not allowed.\n";
        else
            result = num1 / num2;
    } else {
        cout << "Invalid operator.\n";
        return 1;
    }

    if (op == '+' || op == '-' || op == '*' || (op == '/' && num2 != 0))
        cout << "Result: " << result << endl;

    return 0;
}