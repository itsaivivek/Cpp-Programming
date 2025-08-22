#include <iostream>

using namespace std;

int main()
{
    /*Loops in C++
    There are three types of loops in C++:
    1. for loop
    2. while loop
    3. do-while loop
    */

    /*
    For loop in c++
    for(initialiaztion; condition; updation){
        loop body(C++ code);
    }
    */
    // for (int i = 1; i <= 40; i++)
    // {
    //     cout << i << endl;
    // }

    // Example of infinite for loop
    // for (int i = 1; i > 0; i++)
    // {
    //     cout<<i<<endl;
    // }

    /*
    While loop in c++:
    while(condition){
        c++ statements;
    }
    */
    //    int i = 1;
    //    while (i<=40)
    //    {
    //     cout<<i<<endl;
    //     i++;
    //    }

    // Example of infinite while loop
    // int i = 1;
    // while(true)
    // {
    //     cout << i << endl;
    //     i++;
    // }

    /*
    do-while loop in c++
    do{
        c++ statements;
    }while();
    */
   int i = 1;
   do
   {
    cout<<i<<endl;
    i++;
   } while (false);
   

    return 0;
}