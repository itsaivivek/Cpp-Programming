// Create an inline function to calculate the square of a number.

#include<iostream>
using namespace std;

inline int squareNumber(int a){
    return (a*a);
}

int main(){
    int n;
    cout<<"Enter any number:\t";
    cin>>n;    
    cout<<"The square of "<<n<<" is "<<squareNumber(n)<<endl;
    return 0;
}