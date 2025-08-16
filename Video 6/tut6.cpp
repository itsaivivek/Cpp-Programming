// There are two types of header files 
// 1. System header files: It comes with the compiler 
#include <iostream>
// 2. User defined header files: It is written by the programmer 
// #include"this.h" --> This will produce an error if this.h is no present in the current directory
using namespace std;

int main()
{
    int a = 4, b =5;
    cout << "Operators in C++:"<<endl;
    cout << "Following are the types of operators in C++"<<endl;
    cout<<endl;
    //Arithmetic operators
    cout << "Following are Arithmetic operators"<<endl;
    cout<<"The value of a+b is "<<a+b<<endl;
    cout<<"The value of a-b is "<<a-b<<endl;
    cout<<"The value of a*b is "<<a*b<<endl;
    cout<<"The value of a/b is "<<a/b<<endl;
    cout<<"The value of a%b is "<<a%b<<endl;
    cout<<"The value of a++ is "<<a++<<endl;
    cout<<"The value of a-- is "<<a--<<endl;
    cout<<"The value of ++a is "<<++a<<endl;
    cout<<"The value of --a is "<<--a<<endl;
    cout<<endl<<endl;

    // Assignment Operators --> used to assign values to variables
    // int a = 3, b = 9;
    // char d = 'd';

    // Comparison operators
    cout << "Following are Comparision operators"<<endl;
    cout<<"The value of a==b is "<<(a==b)<<endl;
    cout<<"The value of a!=b is "<<(a!=b)<<endl;
    cout<<"The value of a>=b is "<<(a>=b)<<endl;
    cout<<"The value of a<=b is "<<(a<=b)<<endl;
    cout<<"The value of a>b is "<<(a>b)<<endl;
    cout<<"The value of a<b is "<<(a<b)<<endl;
    cout<<endl;

    // Logical operators
    cout << "Following are Logical operators"<<endl;
    cout<<"The value of ((a==b) && (a<b)) logical and operator is "<<((a==b) && (a<b))<<endl;
    cout<<"The value of ((a==b) || (a<b)) logical or operator is "<<((a==b) || (a<b))<<endl;
    cout<<"The value of (!(a==b)) logical not operator is "<<(!(a==b))<<endl;
   
    return 0;
}