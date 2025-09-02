// Implement a recursive function to compute the factorial of a number.
#include<iostream>
using namespace std;

int factorial(int n){
    if ((n == 1) || (n==0))
    {
        return 1;
    }
    else{
        return (n*factorial(n-1));
    }
}

int main(){
    int k;
    cout<<"Enter any number:"<<endl;
    cin>>k;
    cout<<"The factorial of "<<k<<" is "<<factorial(k)<<endl;
    return 0;
}