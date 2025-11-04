#include<iostream>
using namespace std;

/*
CLASS TEMPLATES WITH MULTIPLE PARAMETERS(ONE, TWO OR MORE THAN TWO)
template<class T1, class T2...(COMMA SEPERATED)>
class nameOFClass{
    //body
}
*/

template<class T1, class T2>

class MyClass{
    public:
        T1 data1;
        T2 data2;
        MyClass(T1 a, T2 b){
            data1 = a;
            data2 = b;
        }
        void display(){
            cout<<this->data1<<endl<<this->data2;
        }
};

int main(){
    MyClass <char, float> obj('t', 1.18);
    obj.display();
    return 0;
}