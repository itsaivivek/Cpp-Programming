// Show multi-level inheritance with three classes in a hierarchy.
#include<iostream>
using namespace std;

class Animal{
    public:
        Animal(){
            cout<<"This is Animal"<<endl;
        }
};
class Mammal: public Animal{
    public:
        Mammal(){
            cout<<"The Animal is Mammal"<<endl;
        }
};
class Cow: public Mammal{
    public:
        Cow(){
            cout<<"Its a Cow"<<endl;
        }
};
int main(){
    Cow c1;
    return 0;
}