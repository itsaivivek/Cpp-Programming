// Implement a switch statement to handle multiple cases for a menu-driven program.
#include <iostream>
using namespace std;

int main()
{
    float num1, num2, result;
    char symbol;
    cout << "Enter first number" << endl;
    cin >> num1;
    cout << "Enter second number" << endl;
    cin >> num2;
    cout << "Enter operation you want to perform( + or - or * or / )" << endl;
    cin >> symbol;
    switch (symbol)
    {
    case '+':
        result = num1 + num2;
        break;
    case '-':
        result = num1 - num2;
        break;
    case '*':
        result = num1 * num2;
        break;
    case '/':
        result = num1 / num2;
        break;
    default:
        cout << "Invalid operator" << endl;
        exit(0);
        break;
    }
    cout << "The value of " << num1 << " " << symbol << " " << num2 << " = " << result;

    return 0;
}