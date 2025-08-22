//Write a multiplication table of 6 using do-while loop

#include<iostream>
using namespace std;
int main(){
    int i = 1;
    do
    {
        cout<<"6 x "<<i<<" = "<<(6*i)<<endl;
        i++;
    } while (i<=10);
    
    return 0;
}