#include <iostream>
using namespace std;

int main()
{
    // Basic Example
    int a = 4;
    int *ptr = &a;
    cout << "The value of a is " << *(ptr) << endl;

    // new operator
    int *p = new int(40); // Dynamically initializing integer and putting its address in p
    cout << "The value at address p is " << *(p) << endl;

    int *arr = new int[3]; // made an integer array. Dynamically allocating size of three integer
    arr[0] = 10;
    
    *(arr+1) = 20; // or arr[1] = 20;
    arr[2] = 30;
    // delete[] arr; // delete operator or delete[]
    cout << "The value of arr[0] is " << arr[0] << endl;
    cout << "The value of arr[1] is " << arr[1] << endl;
    cout << "The value of arr[2] is " << arr[2] << endl;

    

    return 0;
}