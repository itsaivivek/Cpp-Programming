// Use break and continue statements in a loop to skip certain iterations or exit early.
#include<iostream>
using namespace std;

int main(){
    for (int i = 0; i < 10; i++)
    {
        if (i==3)           
        {
            continue;       // skips printing when i == 3
        }
        if (i==9)
        {
            break;          // exits loop completely when i == 9
        }
        cout<<i<<"\t";
    }
    
    return 0;
}