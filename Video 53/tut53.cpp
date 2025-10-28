#include<iostream>
using namespace std;

class A{
    int a;
    public:
        // void setData(int a){
        //     // a = a; // When we do a = a the output of getData() will be a garbage value because in c++ local variable have more precedence. So a = a will set itsself vaule in itself
        
        //     this->a = a;
        // }
        A & setData(int a){
            this->a = a;
            return *this; // "this" is a pointer which is pointing to that object which had called "this" setData() function. And dereferencing "this" gives object
        }
        void getData(){
            cout<<"The value of a is "<<a<<endl;
        }
};

int main(){
    // "this" is a keyword which is a pointer which points to the object which invokes the member function.
    A a;
    // a.setData(4);
    // a.getData();

    a.setData(4).getData(); // Here setData returns the object so we can call another member function directly there.
    return 0;
}