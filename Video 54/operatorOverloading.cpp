#include <iostream>
using namespace std;

class Complex
{
private:
    int real, imag;

public:
    Complex()
    {
        real = 0;
        imag = 0;
    }
    Complex(int r, int i)
    {
        real = r;
        imag = i;
    }
    void print()
    {
        cout << real << " + " << imag << "i" << endl;
    }
    /*
    Operator overloading syntax
    return -type operator{what-operator}(arguments-optional)
    {
        code...
    }
    
    */ 
    Complex operator+(Complex c)
    { // Passing the argument whose datatype is also same as that of class

        Complex temp; // Creating temporary object of same class
        temp.real = real + c.real; // Here "real" corresponds to datamember of c1, "c.real" corresponds to datamember of c2, and so on if there are more
        temp.imag = imag + c.imag;
        return temp;
    }
};

int main()
{
    // int x = 5;
    // int y = 4;
    // int z = x+y;
    // cout<<"z value: "<<z<<endl;
    // By default in c++ "+" operator add the primitive datatypes. But if I want to define for userdefined data type I have to overload this operator

    Complex c1(5, 4);
    Complex c2(2, 5);
    Complex c3(1, 1);
    Complex c4, c5;
    c4 = c1 + c2; // is working as c4 = c1.add(c2)
    c4.print();
    c5 = c1 + c2 + c3; // is working as c5 = c1.add(c2).add(c3)
    c5.print();
    // If I would have created add function I would have called add function two times so here is operator overloading giving us ease

    return 0;
}