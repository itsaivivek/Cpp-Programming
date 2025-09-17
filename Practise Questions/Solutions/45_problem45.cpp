// Use virtual base class to avoid multiple copies in diamond inheritance.
#include<iostream>
using namespace std;

class A{
    public:
    int a;
};
class B: virtual public A{
    public:
    int b;
        
};
class C: virtual public A{
    public:
    int c;
        
};
class D: public B, public C{
    public:
    int d;  
};
int main(){
    D obj;
    obj.a = 1; // a will be ambiguous if virtual base class is not used.
    obj.b = 2;
    obj.c = 3;
    obj.d = 4;
    cout<<"The value of a is "<<obj.a<<endl;
    cout<<"The value of b is "<<obj.b<<endl;
    cout<<"The value of c is "<<obj.c<<endl;
    cout<<"The value of d is "<<obj.d<<endl;
    return 0;
}