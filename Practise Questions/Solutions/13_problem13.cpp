// Create a do-while loop that prompts the user for input until a condition is met.
#include<iostream>
using namespace std;

int main(){
    int num1;
    do
    {
        cout<<"Enter any positive number:"<<endl;
        cin>>num1;
        if ((num1<0))
        {
            cout<<"Wrong number"<<endl<<"Please try again"<<endl;
        }
        
    } while (num1<0);
    cout<<"Thank you! You entered."<<endl;
    return 0;
}