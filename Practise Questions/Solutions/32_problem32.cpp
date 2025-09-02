// Overload a function to handle addition for integers and floats.

#include<iostream>
using namespace std;

int add(int a, int b){
    return a+b;
}
float add(float a, float b){
    return a+b;
}

int main(){
    int a = 10, b = 6;
    float x = 10.4, y = 4.8;
    cout<<"The value of "<<a<<" + "<<b<<" = "<<add(a,b)<<endl;
    cout<<"The value of "<<x<<" + "<<y<<" = "<<add(x,y)<<endl;
    return 0;
}