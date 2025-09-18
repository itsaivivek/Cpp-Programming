// Use parameterized and default constructors in a class.
#include <iostream>
using namespace std;

class A
{
    int data;

public:
    A()
    {
        cout << "Default constructor Called!!!" << endl;
        data = 0;
    }
    A(int x)
    {
        cout << "Parameterized constructor Called!!!" << endl;
        data = x;
    }
    void printNumber()
    {
        cout << "The value of data is " << data << endl;
    }
};

int main()
{
    A obj;
    obj.printNumber();
    A obj1(10); // Implicit call
    obj1.printNumber();
    A obj2 = A(10); // Explicit call
    obj2.printNumber();
    return 0;
}