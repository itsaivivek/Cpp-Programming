// Implement multiple inheritance with two base classes.
#include<iostream>
using namespace std;

class Base1{
    private:
        int var1;
    public:
        void setData1(int a){
            var1 = a;
        } 
        void getData1(){
            cout<<"Value of Private Member in Base1 = "<<var1<<endl;
        }
};
class Base2{
    private:
        int var2;
    public:
        void setData2(int a){
            var2 = a;
        }
        void getData2(){
            cout<<"Value of Private Member in Base2 = "<<var2<<endl;
        }
};
class Derived: public Base1, public Base2{
    public:
        Derived(){
            cout<<"This is Derived class"<<endl;
        }
};

int main(){
    Derived obj;
    obj.setData1(10);
    obj.setData2(20);
    obj.getData1();
    obj.getData2();
    return 0;
}