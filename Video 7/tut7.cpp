#include<iostream>

using namespace std;

int c = 45;

int main(){

    // ******Built in Data types******
    // int a, b, c;
    // cout<<"Enter the value of a:"<<endl;
    // cin>>a;
    // cout<<"Enter the value of b:"<<endl;
    // cin>>b;
    // c = a+b;
    // cout<<"The sum is "<<c<<endl;
    // cout<<"The global c is "<<::c; // Scope resolution operator


     // ******float, double and long double Literals******
    float d = 34.4f;
    long double e = 34.4l;
    //Whenever we have to pass the values of float or double then if we pass them like 34.4 it will pass as double by default but if we want to pass it as float only then type 34.4f
    //Similarly if we want to send long double type 34.4l
    //Normally it is not used but for function overloading it is useful
    // We can use small or capital f or l 
    
    // cout<<"The size of 34.4 is "<<sizeof(34.4)<<endl;
    // cout<<"The size of 34.4f is "<<sizeof(34.4f)<<endl;
    // cout<<"The size of 34.4F is "<<sizeof(34.4F)<<endl;
    // cout<<"The size of 34.4l is "<<sizeof(34.4l)<<endl;
    // cout<<"The size of 34.4L is "<<sizeof(34.4L)<<endl;

    cout<<"The value of d is "<<d<<endl<<"The value of e is "<<e;
    return 0;
}