#include <iostream>
using namespace std;

class Complex
{
    int real, imaginary;

public:
    void getData()
    {
        cout << "The real part is " << real << endl;
        cout << "The imaginary part is " << imaginary << endl;
    }
    void setData(int a, int b)
    {
        real = a;
        imaginary = b;
    }
};

int main()
{
    // Complex c1;
    // Complex *ptr = &c1;
    Complex *ptr = new Complex;

    // c1.setData(1, 54);
    // c1.getData();
    // (*ptr).setData(1, 54); is exactly same as
    ptr->setData(1,54);
    // Arrow operator dereferce the pointer and then call function
    // (*ptr).getData(); is as good as 
    ptr->getData();

    
    // Array of Objects
    Complex *ptr1 = new Complex[4];
    ptr1->setData(1,54);
    ptr1->getData();


    return 0;
}