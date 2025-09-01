// Use loops to iterate over and print elements of a 2D array.
#include<iostream>
using namespace std;

int main(){
    int array[3][3];
    cout<<"Enter the element of array at index "<<endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<"["<<i<<", "<<j<<"] = ";
            cin>>array[i][j];
        }
        
    }
    cout<<endl<<"Printing Array"<<endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<array[i][j]<<"\t";
        }
        cout<<endl;
    }
    
    return 0;
}