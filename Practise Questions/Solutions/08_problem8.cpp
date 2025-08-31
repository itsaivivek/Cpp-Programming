/*
Create an expression in C++ and evaluate it considering operator precedence and associativity.
Answer:
    Let any expression:
    a+b*a%(c*a)/2+d%c-b
        where a = 10, b = 6, c = 8, d = 7

Now solving:
        a + b * a % (c * a) / 2 + d % c - b
    =   a + b * a % (8 * 10) / 2 + d % c - b
    =   a + b * a % 80 / 2 + d % c - b
    =   a + 6 * 10 % 80 / 2 + 7 % 8 - b
    =   a + 60 % 80 / 2 + 7 % 8 - b
    =   a + 60 / 2 + 7 % 8 - b      // (60 % 80 = 60)
    =   a + 30 + 7 % 8 - b
    =   a + 30 + 7 - b              // (7 % 8 = 7)
    =   10 + 30 + 7 - 6
    =   40 + 7 - 6
    =   47 - 6
    =   41
*/ 
// Checking answer validity by code
#include<iostream>
using namespace std;

int main(){
    int a = 10, b = 6, c = 8, d = 7;
    cout<<"Here a = 10, b = 6, c = 8, d = 7"<<endl;
    cout<<"The value of (a + b * a % (c * a) / 2 + d % c - b) = "<<(a + b * a % (c * a) / 2 + d % c - b)<<endl;
    return 0;
}