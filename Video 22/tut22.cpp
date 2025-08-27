#include <iostream>
#include <string>
using namespace std;

// OOPS - Classes and objects
// C++ --> Initially called C with classes by stroustroup
// class --> extension of structures (in C)
// Structures had limitations:
//      - Members are public
//      - No methods
// classes --> structures + more
// classes --> can have methods and properties
// classes --> can make few members as private and few as public
// structures in c++ are typedef
// you can declare objects along with the class declaration
/*
    class Employee{
        // Class Definition
    } harry, rohan;
*/
// harry.salary - it makes no sense if salary is private

// Nesting of member funtion
class binary
{
    // By default class member are private
    // string s;
private:
    string s;
    void chk_bin(void);

public:
    void read(void);
    // void chk_bin(void);
    void onesCompliment(void);
    void display(void);
};

void binary ::read(void)
{
    cout << "Enter a binary number" << endl;
    cin >> s;
}
void binary ::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "\nIncorrect binary format" << endl;
            exit(0);
        }
    }
}

void binary ::onesCompliment(void)
{
    chk_bin(); // Here we can use check binary and it is called nesting of member
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}

void binary ::display(void)
{
    cout << "Displaying your binary number" << endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
}
int main()
{
    binary b;
    b.read();
    // b.chk_bin(); error because chk_bin is private
    b.display();
    b.onesCompliment();
    cout<<endl<<"After onesCompliment ";
    b.display();

    return 0;
}