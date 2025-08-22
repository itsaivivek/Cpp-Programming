// Initialize array and print its element using while and do-while loop

#include <iostream>
using namespace std;

int main()
{
    int marks[] = {23, 45, 56, 89};
    int i = 0;
    cout << "Using while loop" << endl;
    while (i < 4)
    {
        cout << "The value of marks[" << i << "] is " << marks[i] << endl;
        i++;
    }
    cout << endl
         << "Using do while loop" << endl;
    int j = 0; 
    do
    {
        cout << "The value of marks[" << j << "] is " << marks[j] << endl;
        j++;
    }
    while (j < 4)
        ;

    return 0;
}