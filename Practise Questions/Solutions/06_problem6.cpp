// Implement a program using arithmetic operators to perform calculations on two numbers.
#include<iostream>
using namespace std;

int main(){
    int num1, num2;
    cout<<"Enter first number"<<endl;
    cin>>num1;
    cout<<"Enter second number"<<endl;
    cin>>num2;
    cout<<"The value of "<<num1<<" + "<<num2<<" is "<<(num1+num2)<<endl;
    cout<<"The value of "<<num1<<" - "<<num2<<" is "<<(num1-num2)<<endl;
    cout<<"The value of "<<num1<<" * "<<num2<<" is "<<(num1*num2)<<endl;
    cout<<"The value of "<<num1<<" / "<<num2<<" is "<<(num1/num2)<<endl;
    return 0;
}