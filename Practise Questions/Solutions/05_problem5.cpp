// Develop a C++ program that takes user input for name and age and displays them.
#include<iostream>
using namespace std;

int main(){
    string name;
    int age;
    cout<<"Enter your name"<<endl;
    cin>>name;
    cout<<"Enter your age"<<endl;
    cin>>age;
    cout<<"Your name is "<<name<<" and your age is "<<age<<endl;
    return 0;
}