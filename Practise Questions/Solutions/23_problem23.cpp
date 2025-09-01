// Define a structure for a book with fields like title and price, and create instances.
#include <iostream>
using namespace std;

struct books
{
    string title;
    float price;
};

int main()
{
    // struct books b1,b2;
    // b1.title = "C++ Programming";
    // b1.price = 8.5;
    // b2.title = "Python Language";
    // b2.price = 5.6;

    // Don’t need to write struct books b1, b2; in C++ (unlike C) also can be initialized in one line.
    // books b1 = {"C++ Programming", 8.5};
    // books b2 = {"Python Language", 5.6};

    // cout << "The Book list are:" << endl;
    // cout << "Title:\t" << b1.title << endl
    //      << "Price:\t$" << b1.price << endl
    //      << endl;
    // cout << "Title:\t" << b2.title << endl
    //      << "Price:\t$" << b2.price << endl
    //      << endl;

    books library[5] = {
        {"C++ Programming", 8.5},
        {"Python Language", 5.6},
        {"HTML Tutorial", 2.5},
        {"JavaScript For Dummies", 4.3},
        {"MySQL", 3.75}};

    for (int i = 0; i < 5; i++)
    {
        cout<<"Title:\t"<<library[i].title<<endl<<"Price:\t$"<<library[i].price<<endl<<endl;
    }
    
    return 0;
}