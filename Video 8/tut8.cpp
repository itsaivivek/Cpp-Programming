#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    // int a = 34;
    // cout << "The value of a was: " << a <<endl;
    // a = 45;
    // cout << "The value of a was: " << a <<endl;

    // Constant in C++
    //  const int a =3;
    //  cout << "The value of a was: " << a <<endl;
    //  a = 45;
    //  cout << "The value of a was: " << a <<endl; //  error: assignment of read-only variable 'a'

    // ************Manipulators in C++ ************
    // int a = 3, b =78, c = 1233;
    // cout<<"The value of a is: "<<a<<endl;
    // cout<<"The value of b is: "<<b<<endl;
    // cout<<"The value of c is: "<<c<<endl;
    // cout<<endl;
    // cout<<"The value of a is: "<<setw(4)<<a<<endl;
    // cout<<"The value of b is: "<<setw(4)<<b<<endl;
    // cout<<"The value of c is: "<<setw(4)<<c<<endl;

    // Operator Precedence
    int a = 3, b = 4;
    int c = a * 5 + b;           // is evaluated as (a*5) + b;
    int d = a * 5 + b - 45 + 87; // is evaluated as ((((a*5) + b)-47)+87);
    cout << c << endl
         << d;
    return 0;
}