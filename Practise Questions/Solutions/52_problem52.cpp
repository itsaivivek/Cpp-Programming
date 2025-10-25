// Dynamically initialize objects using new and constructors. 
#include<iostream>
using namespace std;

class Dynamic{
    int value;
    public:
        Dynamic(){
            value = 0;
        }
        Dynamic(int x){
            value = x;
        }
        void display(){
            cout<<"The value is "<<value<<endl;
        }
};

int main(){
    // Dynamic initialization of default constructor
    Dynamic *obj = new Dynamic;

    // Dynamic initialization of parameterized constructor
    Dynamic *obj1 = new Dynamic(10);

    obj->display();
    obj1->display();

    delete obj;
    delete obj1;
    return 0;
}