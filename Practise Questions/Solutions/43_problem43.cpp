// Implement hybrid inheritance combining multiple and multi-level
#include <iostream>
using namespace std;

class Animal
{
public:
    Animal()
    {
        cout << "This is Animal" << endl;
    }
    Animal(int x)
    {
        // This parameterized constructor is made so that default constructor will not print This is Animal Again.
    }
};
class Mammal : public Animal
{
public:
    Mammal()
    {
        cout << "The Animal is Mammal" << endl;
    }
};
class Bird : public Animal
{
public:
    Bird() : Animal(4)
    { // Explicitly calling a base class prameterized constructor to prevent print of "This is Animal"
        cout << "The Animal is Bird" << endl;
    }
};
class Bat : public Mammal, public Bird
{
public:
    Bat()
    {
        cout << "Its a Bat" << endl;
    }
};

int main()
{
    Bat b1;
    return 0;
}