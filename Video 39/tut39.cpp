#include<iostream>
using namespace std;

class Base{
    protected: // I am like Private but can be inherited
    int a;
    private: // Cannot be Inherited
    int b;
};
/*
For a protected member:

                    Public derivation   Private Derivation  Protected Derivation
1. Private members:   Not Inherited       Not Inherited        Not Inherited
2. Protected members: Protected           Private              Protected
3. Public members:    Public              Private              Protected
*/
class Derived :protected Base{

};

int main(){
    Base b;
    Derived d;
    // cout<<d.a; // Will not work since a is protected in both base as well as derived class
    return 0;
}