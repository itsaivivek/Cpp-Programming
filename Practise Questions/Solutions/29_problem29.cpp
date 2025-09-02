// Use default arguments in a function to greet a user with optional parameters.

#include <iostream>
using namespace std;

void greet(string name, string prefix = "Mx"){ // Mx is default prefix for neutral(gender not identified).
        cout<<"Hello "<<prefix<<"."<<name<<" ! Welcome to this program."<<endl;     
}

int main()
{
    string name;
    string prefix;
    cout << "Enter your name:\t";
    cin >> name;
    cout << "Do you have any special prefix(if yes then type prefix | if no then type no):\t";// You can type Mr or Mrs Er or Dr or Prof, etc
    cin >> prefix;
    if ((prefix == "no") || (prefix == "No") || (prefix == "n") || (prefix == "N"))
    {
        greet(name);
    }
    else
    {
        greet(name, prefix);
    }
    return 0;
}