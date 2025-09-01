// Declare a pointer and use it to access and modify a variable's value.
#include<iostream>
using namespace std;

int main(){
    int a = 10;
    int *ptr = &a;
    cout<<a<<" "<<(*ptr)<<endl;
    *ptr = 15;
    cout<<a<<" "<<(*ptr)<<endl;
    return 0;
}