#include <iostream>
using namespace std;

// Base Class
class Employee
{
    public:
    int id;
    float salary;
    Employee(){}
    Employee(int inpId)
    {
        id = inpId;
        salary = 34;
    }
};

// Derived Class syntax
/*
class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
{
    class members/methods/etc....
}

Notes:
1. Default visibility mode is private
2. Public visibilty mode: Public members of the base class becomes public members of the derived class/
3. Private visibilty mode: Public members of the base class becomes private members of the derived class/
4. Private members are never inherited
*/

// Creating a Programmer class derived from Employee Base class
class Programmer : Employee{
    public:
    int languageCode;
    Programmer(int inpId){
        id = inpId;
        languageCode = 9;
    }
    void getData(){
        cout<<id<<endl;
    }
};


int main()
{
    Employee harry(1), rohan(2);
    cout << harry.salary<<endl;
    cout << rohan.salary<<endl;
    Programmer skillF(10);
    cout<<skillF.languageCode<<endl;
    // cout<<skillF.id; // Although id is public in Employee but cannnot print id because programmer class is inherited privately.
    skillF.getData();
    return 0;
}