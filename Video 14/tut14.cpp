#include<iostream>
using namespace std;

// struct employee
// {
//     int eId;
//     char favChar;
//     float salary;
// };

typedef struct employee
{
    int eId; // 4 bytes
    char favChar; // 1 bytes
    float salary; // 4 bytes
    //Total 9 bytes
} ep;

union money{
    int rice; // 4 bytes
    char car; // 1 bytes
    float pounds; // 4 bytes
    // Maximum memory will be given i.e 4 bytes
};

int main(){
    // struct employee harry;
    cout<<"About Structures"<<endl;
    ep harry;
    struct employee shubham;
    struct employee rohanDas;
    harry.eId = 1;
    harry.favChar = 'c';
    harry.salary = 1200000000;
    cout<<"The value is "<<harry.eId<<endl;
    cout<<"The value is "<<harry.favChar<<endl;
    cout<<"The value is "<<harry.salary<<endl<<endl;
    
    cout<<"About Union"<<endl;
    // In union you can only set one value at a time.
    union money m1;
    m1.rice = 34;
    m1.car = 'c';
    cout<<m1.rice<<endl; // Now it gives garbage value.
    cout<<m1.car<<endl<<endl;

    cout<<"About enums"<<endl;
    enum Meal{breakfast, lunch, dinner};
    Meal x1 = breakfast;
    cout<<x1<<endl;
    cout<<breakfast<<endl;
    cout<<lunch<<endl;
    cout<<dinner<<endl;
    return 0;
}