// Write a friend function to access private members of a class.
#include<iostream>
using namespace std;

class A{
    private:
        int private_variable;
    public:
    A(){ // Default constructor
        private_variable = 0;
    }
    A(int x){ // Parameterized constructor
        private_variable = x;
    }
    friend void display(A &);
};

void display(A &obj){
    cout<<"The value of private variable is "<<obj.private_variable<<endl;
}

int main(){
    A object1, object2(10);
    display(object1);
    display(object2);
    return 0;
}