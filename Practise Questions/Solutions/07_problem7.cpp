/*
// Write code to show the difference between reference variables and typecasting in C++.

Answer:
Reference variables and typecasting are distinct concepts in programming, though both relate to how data is handled and interpreted.
Reference Variable:
A reference variable is an alias or an alternative name for an existing variable. It does not store a separate copy of the data but instead refers directly to the memory location of the original variable. This means any operation performed on the reference variable directly affects the original variable. References are often used to avoid copying large objects when passing them to functions, improving efficiency.
Typecasting:
Typecasting, or type conversion, is the process of converting a value of one data type to another data type. This can be either implicit (automatic conversion by the compiler) or explicit (programmer-specified conversion). Typecasting is necessary when an operation or function expects a specific data type, and the value being provided is of a different type. It allows for the manipulation of data in a way that aligns with the requirements of the program. 

*/
#include<iostream>
using namespace std;

int main(){
    // Reference variable Example
    cout<<"Reference variable Example"<<endl;
    int a = 10;
    int &ref = a; // ref is now new name of a like a person can be called by different name but person is same.
    cout<<a<<" "<<ref<<endl;
    ref = 38; // changing value of reference variable also change value of a
    cout<<a<<" "<<ref<<endl<<endl;
    
    //Typecasting Example
    cout<<"Typecasting Example"<<endl;
    int x = 4, product1;
    float product2;
    float y = 5.35;
    // 4 * 5.35 = 21.4
    product1 = x*y; // prints 21 --> 21.4 is demoted to 21 by compiler because product1 is integer as defined;
    cout<<product1<<endl;
    cout<<(x*y)<<endl; // print 21.4 becasue x = 4 become x = 4.00
    product2 = x*y; // prints 21.4 because product2 is float.
    cout<<product2<<endl;
    product2 = x*(int)y; // prints 20 because first y is demoted to 5 then multiplied
    cout<<product2<<endl;
    return 0;
}