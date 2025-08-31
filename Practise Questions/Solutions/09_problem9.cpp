// Use if-else statements to control the flow based on a condition in a program.
#include<iostream>
using namespace std;

int main(){
    int age;
    cout<<"Age validation for Driving License"<<endl<<"Enter your Age:"<<endl;
    cin>>age;
    if (age>=18)
    {
        cout<<"You can drive."<<endl;
    }
    else{
        cout<<"You cannot drive."<<endl;
    }
    return 0;
}