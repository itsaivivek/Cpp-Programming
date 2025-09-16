// Use protected access modifier in a base class and access it in derived class.
#include<iostream>
using namespace std;

class Base{
    protected:
        int protectedData;
};
class Derived: public Base{
    public:
        void setData(int a){
            protectedData = a;
        }
        void getData(){
            cout<<"The value of Protected Data = "<<protectedData<<endl;
        }
};

int main(){
    Derived obj;
    obj.setData(10);
    obj.getData();
    return 0;
}