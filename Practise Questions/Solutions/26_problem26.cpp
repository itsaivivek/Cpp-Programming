// Write a function prototype and define a function to add two numbers.

#include <iostream>
using namespace std;

float add(float, float); // Function Prototype

int main()
{
    float num1, num2;
    cout << "Enter first number:\t";
    cin >> num1;
    cout << "Enter second number:\t";
    cin >> num2;
    cout << "The value of " << num1 << " + " << num2 << " = " << add(num1, num2); // Function Invocation
    return 0;
}

// Function Definition
float add(float a, float b)
{
    return (a + b);
}