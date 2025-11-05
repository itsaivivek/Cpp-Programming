#include<iostream>
using namespace std;

int main(){
    float numerator, denominator, result;
    cout<<"Enter numerator and denominator: "<<endl;
    cin>>numerator>>denominator;
    try
    {
        if(denominator == 0){
            throw denominator; // program flow goes to catch block
        }

        result= numerator/denominator; // division happens here
        cout<<"Division is: "<<result<<endl;
    }
    catch(float ex)
    {
        cout<<"Exception: Divide by zero not allowed."<<endl<<"Denominator: "<<ex<<endl;
    }
    return 0;
}