// Build a program that uses comparison operators within if-else to decide outcomes.
#include<iostream>
using namespace std;

int main(){
    int age;
    cout<<"\tAge Validation\t"<<endl<<"For Atm Card Withdrawal Limit"<<endl;
    cout<<"Enter your Age: "<<endl;
    cin>>age;
    if (age == 18)
    {
        cout<<"Your withdrawal limit is 25K"<<endl;
    }
    else if ((age<18) && (age>=1))
    {
        cout<<"Your withdrawal limit is 5K"<<endl;
    }
    else if((age>18) && (age<=110)){
        cout<<"Your withdrawal limit is 75K"<<endl;
    }
    else{
        cout<<"Invalid Age Entered"<<endl;
    }
    return 0;
}