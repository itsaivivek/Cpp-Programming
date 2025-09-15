/*
Create 2 classes:
    1. SimpleCalculator - Takes input of 2 number using utility function and performs +, -, *, / and displays the results another function.
    2. ScientificCalculator - Takes input of 2 number using utility function and performs +, -, *, / and performs any four scientifc operation of your choice and displays the results another function.

Create another class HybridCalculator and inherit it using these 2 classes:
Q1. What type of Inheritance are you using?
Q2. Which mode of Inheritance are you using?
Q3. Create an object of HybridCalculator and display results of simple and scientific calulator.
Q3. How is code reusability implemented?
*/
#include <iostream>
#include <cmath>
using namespace std;
class SimpleCalculator
{
protected:
    float num1;
    float num2;
    float sum, diff, pro, quo;

public:
    void simple_setNumber()
    {
        cout << "Enter First Number:\t";
        cin >> num1;
        cout << "Enter Second Number:\t";
        cin >> num2;
    }

    void simple_result()
    {
        cout << "Sum = " << (num1 + num2) << endl;
        cout << "Difference = " << (num1 - num2) << endl;
        cout << "Product = " << (num1 * num2) << endl;
        cout << "Quotient = " << (num1 / num2) << endl;
    }
};
class ScientificCalculator
{
protected:
    int num3;

public:
    void scientific_setNumber()
    {
        cout << "Enter any Number:\t";
        cin >> num3;
    }
    void scientific_result()
    {
        cout << "sin(" << num3 << ") = " << sin(num3) << endl;
        cout << "cos(" << num3 << ") = " << cos(num3) << endl;
        cout << "tan(" << num3 << ") = " << tan(num3) << endl;
        cout << "log(" << num3 << ") = " << log(num3) << endl;
    }
};

class HybridCalculator : public SimpleCalculator, public ScientificCalculator
{
};

int main()
{
    HybridCalculator calc;
    calc.simple_setNumber();
    calc.simple_result();
    calc.scientific_setNumber();
    calc.scientific_result();

    return 0;
}

/*
Q1. What type of Inheritance are you using?
Answer: I am using multiple inheritance
SimpleCalculator + ScientificCalculator--->HybridCalculator

Q2. Which mode of Inheritance are you using?
Answer: I am using public Derivation mode.

Q3. Create an object of HybridCalculator and display results of simple and scientific calulator.
Answer: Done

Q3. How is code reusability implemented?
Answer: I dont have to write all functions of simple and scientific in hybrid. Here I used inheritance so code reusablitly implemented.

*/