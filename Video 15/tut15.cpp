#include<iostream>
using namespace std;

//Funtion prototype
// type funtion_name (arguments);
// int sum(int, int); // acceptable
// int sum(int a, b); // Not acceptable
int sum(int a, int b); // Acceptable
// void g(void); // is acceptable
void g(); // acceptable
int main(){
    int num1, num2;
    cout<<"Enter first number"<<endl;
    cin>>num1;
    cout<<"Enter second number"<<endl;
    cin>>num2;
    cout<<"The sum is "<<sum(num1, num2)<<endl;
    // num1 and num2 are actual parameters
    g(); 
    return 0;
}

int sum(int a, int b){
    // Formal parameters a and b will be taking values from actual parameters num1 and num2
    int c = a+b;
    return c;
}

void g(){
    cout<<"Hello, Good Morning"<<endl;
}