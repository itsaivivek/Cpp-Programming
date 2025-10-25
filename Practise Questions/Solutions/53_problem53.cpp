// Implement a copy constructor to copy one object to another.
#include<iostream>
using namespace std;

class A{
    public:
        int x;
        A(){}
        A(A &obj){
            cout<<"Copy constructor called!!!"<<endl;
            x = obj.x;
        }

};

int main(){
    A a1;
    a1.x = 10;
    cout<<"The value of a1 is "<<a1.x<<endl;  
    A a2(a1);
    cout<<"The value of a2 is "<<a2.x<<endl;
    return 0;
}