// Apply the const keyword to variables and function parameters.

#include <iostream>
using namespace std;

class Demo
{
private:
    int x;

public:
    void setData(int a)
    {
        x = a;
    }
    // int getData(){
    //     ++x; // Data is being updated because it is not const member function
    //     return x;
    // }
    int getData() const
    {
        // ++x; // Invalid because Data cannot be updated in const member Function
        return x;
    }
};

void printValue(const int val)
{
    // val = 20; // Error: cannot modify a const parameter
    cout << "Value: " << val << endl;
}

int main()
{
    cout << "Const Keyword in Variable" << endl;
    const int num1 = 2;
    const int num2 = 5;
    cout << num1 << endl
         << num2 << endl;
    // num1 = 10; // Invalid

    cout << "Const keyword in Function parameter" << endl;
    int val = 10;
    printValue(val);
    cout << "Const Keyword in member function" << endl;
    Demo d;
    d.setData(10);
    cout << d.getData();

    return 0;
}
