// Use different visibility modes in inheritance and observe member access.
#include <iostream>
using namespace std;

class Employee
{
private:
    int id;

protected:
    float salary;

public:
    string name = "Unknown";
    void setData(int a, float b){
        id = a;
        salary = b;
    }
    void printData()
    {
        cout<<"The name is "<<name<<". ";
        cout << "The id is: "<<id<<" and the salary is: "<<salary << endl;
    }
};
class Programmer: public Employee{
    public:
        void setName(string n){
            name = n;
        }
        
    };
    
    class Boss: private Employee{
        public:

        void setName(string n){
            name = n;
        }
};
class Manager: protected Employee{
    public:
        void setName(string n){
            name = n;
        }
};

int main()
{
    Employee emp1;
    emp1.setData(100, 4000);
    emp1.printData();
    Programmer p1;
    p1.setName("Vivek");
    p1.setData(102, 6000);
    p1.printData();
    Boss b1;
    b1.setName("Mark");
    // b1.setData(1, 100000); // is inaccessible because in private derivation public and protected members of base class become private of derived class.
    // b1.printData();
    Manager m1;
    m1.setName("Harry");
    // m1.setData(100, 8000); // is inaccessible because in protected derivation public and protected members of base class become protected of derived class 
    // m1.printData();
    return 0;
}