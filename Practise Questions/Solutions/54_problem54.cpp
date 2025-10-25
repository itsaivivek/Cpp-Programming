// Define a destructor in a class to clean up resources.
#include<iostream>
using namespace std;
int count = 0;
class Demo{
    int x;
    public:
        Demo(){
            x = 0;
            count++;
            cout<<"Default constructor called for object no"<<count<<endl;
        }
        Demo(int a){
            x = a;
            count++;
            cout<<"Parameterized constructor called for object no"<<count<<endl;
        }
        ~Demo(){
            cout<<"Destructor called for object no"<<count<<endl;
            count--;
        }
        void display(){
            cout<<"The value of x is "<<x<<endl;
        }
};

int main(){
    cout<<"Entering main function"<<endl;
    Demo obj1;
    obj1.display();
    {
        cout<<"Entering into block"<<endl;
        Demo obj2(10);
        obj2.display();
        Demo obj3(30);
        obj3.display();
        cout<<"Exiting from block"<<endl;
    }
    cout<<"Exiting from main"<<endl;
    return 0;
}