#include<iostream>
#include<functional>
#include<algorithm>

using namespace std;

int main(){
    // Function Objects (Functor): Function wrapped in a class so that it is available like an object
    int arr[] = {1, 73, 4, 12, 54, 7};
    sort(arr, arr+5); // sort from 1st element to 5th in acending order.
    sort(arr, arr+5, greater<int>()); // sort from in descending order from 1st to 5th element
    // Here sort function is also takes a function object for eg this greater<int>() is function object
    for (int i = 0; i < 6; i++)
    {
        cout<<arr[i]<<endl;
    }
    

    return 0;
}