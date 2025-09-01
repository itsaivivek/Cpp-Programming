// Define a class with objects and use pointers to access object members.

#include <iostream>
using namespace std;

class Animal
{
private:
    int a, b;

public:
    int x, y, z;
    void displayMessage(void)
    {
        cout << "This is an object member function" << endl;
    }
};

int main()
{
    Animal dog;
    Animal *ptr = &dog;
    // (*ptr).displayMessage(); // is same as dog.displayMessage();
    ptr->displayMessage(); // is same as (*ptr).displayMessage();
    ptr->x = 10; 
    ptr->y = 12;
    ptr->z = ptr->x + ptr->y;
    cout<<ptr->z;
    return 0;
}
