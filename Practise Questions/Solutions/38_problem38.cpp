// Create a derived class that inherits from a single base class and adds new members.
#include<iostream>
using namespace std;

class Base{
    private:
        int private_member;
    protected:
        int protected_member;
    public:
        int public_member;
        void setBaseData(int a, int b){
            private_member = a;
            protected_member = b;
        }
        void show(){
            cout<<"Base Private member = "<<private_member<<endl;
            cout<<"Base Protected member = "<<protected_member<<endl;
            cout<<"Base Public member = "<<public_member<<endl;
        }
};

class Derived: public Base{
    private:
        int new_PrivateMember;
    protected:
        int new_ProtectedMember;
    public:
        int new_PublicMember;
        void setDerivedData(int a, int b){
            new_PrivateMember = a;
            new_ProtectedMember = b;
        }
        void display(){
            cout<<"Derived Private member = "<<new_PrivateMember<<endl;
            cout<<"Derived Protected member = "<<new_ProtectedMember<<endl;
            cout<<"Derived Public member = "<<new_PublicMember<<endl;
        }
};

int main(){
    Derived d1;
    d1.setBaseData(69, 46);
    d1.public_member = 38;
    d1.show();
    d1.setDerivedData(10, 20);
    d1.new_PublicMember = 84;
    d1.display();
    return 0;
}