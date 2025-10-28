#include <iostream>
using namespace std;

class BaseClass
{
public:
    int var_base;
    void display()
    {
        cout << "Displaying Base class variable var_base " << var_base << endl;
    }
};

class DerivedClass : public BaseClass
{
public:
    int var_derived;
    void display()
    {
        cout << "Displaying Derived class variable var_derived " << var_derived << endl;
    }
};

int main()
{
    BaseClass *base_class_pointer;
    BaseClass obj_base;
    DerivedClass obj_derived;
    base_class_pointer = &obj_derived; // Baseclass pointer can point to derivedclass but using that pointer if I call display() then it will call display() of baseclass
    base_class_pointer->var_base = 34;
    base_class_pointer->display();
    // base_class_pointer->var_derived = 134; // Invalid 
    // if we make base class pointer and then point it to derived class then we can only access that members which are inherited from base class
    cout<<endl;
    DerivedClass *derived_class_pointer;
    derived_class_pointer = &obj_derived;
    derived_class_pointer->var_derived = 98;
    derived_class_pointer->display();
    derived_class_pointer->var_base= 9448;
    cout<<derived_class_pointer->var_base<<endl;
    return 0;
}