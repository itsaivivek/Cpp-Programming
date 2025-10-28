#include<iostream>
using namespace std;

class BaseClass
{
public:
    int var_base = 1;
    virtual void display()
    {
        cout << "Displaying Base class variable var_base " << var_base << endl;
    }
};

class DerivedClass : public BaseClass
{
public:
    int var_derived = 2;
    void display()
    {
        cout << "Displaying Derived class variable var_derived " << var_derived << endl;
    }
};


int main(){
    // If pointer is of type baseclass but is pointing to object of derivedclass then also we can only access members of baseclass(which has inherited to derived) using that pointer
    // If the function name is same in base and derived and if we want to run function of derived using that pointer we should add virtual keyword before function in Baseclass
    BaseClass *base_class_pointer;
    BaseClass obj_base;
    DerivedClass obj_derived;

    base_class_pointer = &obj_derived;
    base_class_pointer->display();
    
    return 0;
}