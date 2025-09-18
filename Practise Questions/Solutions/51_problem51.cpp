// Create constructors with default arguments for optional parameters.
#include <iostream>
using namespace std;

class Greet
{
    string userName;
    int userId;

public:
    Greet()
    {
        userId = 0;
    }
    Greet(int id, string name = "User")
    {
        userId = id;
        userName = name;
    }
    void greetMessage()
    {
        if (userId == 0)
        {
            cout << "Id not valid" << endl;
        }
        else
        {
            cout << "Hello " << userName << ". Your User Id is: " << userId << endl;
        }
    }
};

int main()
{
    Greet g1, g2(1203), g3(1480, "Vivek");
    g1.greetMessage();
    g2.greetMessage();
    g3.greetMessage();
    return 0;
}