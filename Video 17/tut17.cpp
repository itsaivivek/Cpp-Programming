#include<iostream>
using namespace std;

//Inline function is used when you have to save time for small funtion. It copies whole funtion to the place where function is called and it saves time like copying actual to formal argument, returning values to calling funcion.
// inline int product(int a, int b){
//     return a*b;
// }

// int product(int a, int b){
//     // Donot recommended to use static with inline function 
//     static int c = 0; // This executes only once
//     c = c+1; // Next time this function is run, the value of c will be retained
//     return a*b+c;
// }

// Here default value is factor, if i donot pass any number to this factor argument then the default 1.04 will be used
// Default argument are written at last
float moneyRecieved(int currentMoney, float factor = 1.04){
    return currentMoney * factor;
}

// Const argument is used when you want that your variable will not be changed by mistake by funtion
// int strlen(const char *p){

// }

int main(){
    // int a, b;
    // cout<<"Enter the value of a and b"<<endl;
    // cin>>a>>b;
    // cout<<"The product of a and b is "<<product(a,b)<<endl;
    // cout<<"The product of a and b is "<<product(a,b)<<endl;
    // cout<<"The product of a and b is "<<product(a,b)<<endl;
    // cout<<"The product of a and b is "<<product(a,b)<<endl;
    int money = 100000;
    cout<<"If you have "<<money<<" Rs in your bank account, you will recieve "<<moneyRecieved(money)<<" Rs after 1 year"<<endl;
    cout<<"For VIP: If you have "<<money<<" Rs in your bank account, you will recieve "<<moneyRecieved(money, 1.1)<<" Rs after 1 year"<<endl;
    return 0;
}