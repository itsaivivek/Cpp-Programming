#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    // Complex(void);
    Complex(int, int);
    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

// Complex :: Complex(void){ // --> This is a default constructor as it accepts no parameters
//     a = 0;
//     b = 0;
// }
Complex :: Complex(int x, int y){ // --> This is a parameterized constructor as it accepts parameters
    a = x;
    b = y;
}

int main()
{
    // Implicit call
    Complex a(4, 6);
    a.printNumber();

    // Explicit call
    Complex b = Complex(5, 7);
    b.printNumber();
    return 0;
}