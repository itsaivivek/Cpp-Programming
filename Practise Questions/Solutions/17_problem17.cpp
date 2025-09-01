// Create an array and access its elements using pointers.
#include<iostream>
using namespace std;

int main(){
    int arr[] = {23, 45, 78, 47};
    int *ptr = arr;
    cout<<"Printing values of array"<<endl;
    for (int i = 0; i < 4; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Printing values of array using pointer(forwards)"<<endl;
    for (int i = 0; i < 4; i++)
    {
        cout<<(*ptr)<<" ";
        ptr++;
    }
    cout<<endl;
    ptr = arr + 4;
    cout<<"Printing values of array using pointer(backwards)"<<endl;
    for (int i = 0; i < 4; i++)
    {
        ptr--;
        cout<<(*ptr)<<" ";
    }

    return 0;
}