// Use unions to store different data types in the same memory location.

#include <iostream>
using namespace std;

union student
{
    int rollNo;
    // string name;
    // In C++, unions cannot hold complex non-trivial types like std::string safely, because only one member can exist
    // in the same memory location, and objects with constructors/destructors (std::string) break union rules.
    // That’s why your code will either not compile or cause runtime issues.
    float marks;
    char grade;
};

int main()
{
    union student s1;
    // s1.name = "vivek";
    // cout << s1.name;
    s1.rollNo = 41;
    cout << s1.rollNo<<endl;
    s1.marks = 81.4;
    cout << s1.marks<<endl;
    s1.grade = 'A';
    cout<<s1.grade<<endl;
    return 0;
}