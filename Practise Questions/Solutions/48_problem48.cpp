// Define a class with a constructor that initializes members.
#include<iostream>
using namespace std;

class A{
    private:
        int val;
    public:
        A(){ // Default constructor
            val = 0;
            cout<<"Default constructor called !!!"<<endl;
        }
        A(int x){ // Parameterized constructor
            val = x;
            cout<<"Parameterized constructor called !!!"<<endl;
        }
        void display(){
            cout<<"The value of object is "<<val<<endl;
        }

};

int main(){
    A obj;
    obj.display();
    A obj1(10);
    obj1.display();
    return 0;
}