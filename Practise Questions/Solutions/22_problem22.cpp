// Write a function that takes an array as argument and modifies its elements.
#include <iostream>
using namespace std;

void modifyArray(int arr[], int size)
{
    int n;
    cout << "Enter the index you want to edit Array: ";
    cin >> n;
    cout << "Enter the new value: ";
    cin >> arr[n];
}

int main()
{
    int arr[6];
    char answer;
    cout << "Enter elements of array:" << endl;
    for (int i = 0; i < 6; i++)
    {
        cin >> arr[i];
    }
    cout << "Printing array:" << endl;
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << endl;
    for (int i = 0; i < 6; i++)
    {
        cout << "Do you want to edit: Yes(y) or No(n): ";
        cin >> answer;
        if ((answer == 'y') || (answer == 'Y'))
        {
            modifyArray(arr, 6);
        }
        else
        {
            break;
        }
    }

    cout << "Printing after modification:" << endl;
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << "\t";
    }

    return 0;
}