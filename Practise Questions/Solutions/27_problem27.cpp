// Demonstrate call by value and call by reference using functions to swap values.

#include<iostream>
using namespace std;

void callByValueSwap(int a, int b){
    int temp;
    temp = a;
    a = b;
    b = a;
}

void callByReferenceSwap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = *a;
}

int main(){
    int a = 5, b = 7;
    cout<<"The value of a is "<<a<<" and b is "<<b<<endl;
    callByValueSwap(a,b);
    cout<<"The value of a is "<<a<<" and b is "<<b<<" (Using callByValueSwap)"<<endl;
    callByReferenceSwap(&a,&b);
    cout<<"The value of a is "<<a<<" and b is "<<b<<" (Using callByReferenceSwap)"<<endl;
    
    return 0;
}