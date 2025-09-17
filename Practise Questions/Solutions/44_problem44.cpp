// Resolve ambiguity in inheritance when members have the same name.
#include <iostream>
using namespace std;

class Base1
{
public:
    void show()
    {
        cout << "This is Base1 class" << endl;
    }
};
class Base2
{
public:
    void show()
    {
        cout << "This is Base2 class" << endl;
    }
};

class Derived: public Base1, public Base2{
    public:
        void show(){ // Function Overriding --> This overrides the show() of Base 1 and Base 2.
            cout<<"This is Derived class"<<endl;
        }
};
int main()
{
    Derived obj;
    // obj.show(); // Ambiguity if there is no function with same name in derived class(i.e No function overriding)
    obj.Base1::show(); // No Ambiguity using scope resolution operator
    obj.Base2::show();
    obj.show();
    return 0;
}