// Demonstrate single inheritance by deriving a class from a base class.
#include<iostream>
using namespace std;

class Animal{
    public:
        Animal(){
            cout<<"This is Animal"<<endl;
        }
};
class Human : public Animal{
    public:
        Human(){
            cout<<"This Animal is Human"<<endl;
        }
};

int main(){
    // Creating object of derived class invokes constructor of base class
    Human ram;
    return 0;
}