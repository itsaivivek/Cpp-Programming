// Perform pointer arithmetic to traverse and manipulate an array.

#include <iostream>
using namespace std;

int main()
{
    int n, array[10];
    int *ptr = array;
    cout << "Enter the no of element in array" << endl;
    cin >> n;
    cout << "Enter elements one by one" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> (*ptr);
        ptr++;
    }
    cout << endl;
    // ptr = ptr - n; // is same as below
    ptr = array; // reset pointer to start
    cout << "Printing array" << endl;
    cout <<"[";
    for (int i = 0; i < n; i++)
    {
        // cout << array[i] << "\t";
        if (i<(n-1))
        {
            cout<< (*ptr) << ", ";
        }
        else{
            cout<<(*ptr);
        }
        ptr++;
    }
    cout<<"]"<<endl;
    return 0;
}