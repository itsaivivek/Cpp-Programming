// Declare a friend class that can access another class's private members.
#include<iostream>
using namespace std;

class Base{
    private:
        int privateData;
    public:
        friend class Another;
};
class Another{
    public:
        void setData(Base &obj, int x = 0){
            obj.privateData = x;
        }
        void display(Base &obj){
            cout<<"The value of private Data of obj from base class is "<<obj.privateData<<endl;
        }
};

int main(){
    Base obj;
    Another a1;
    a1.setData(obj, 10);
    a1.display(obj);
    return 0;
}