// Create a hierarchical inheritance structure with one base and multiple derived classes.
#include<iostream>
using namespace std;
int count = 0;
class Animal{
    public:
        Animal(){
            count++;
            cout<<"This is Animal "<<count<<endl;
        }
};
class Cow: public Animal{
    public:
        Cow(){
            cout<<"This Animal is Cow"<<endl;
        }
};
class Dog: public Animal{
    public:
        Dog(){
            cout<<"This Animal is Dog"<<endl;
        }
};
class Horse: public Animal{
    public:
        Horse(){
            cout<<"This Animal is Horse"<<endl;
        }
};

int main(){
    Cow c1;
    Dog d1;
    Horse h1;    
    return 0;
}