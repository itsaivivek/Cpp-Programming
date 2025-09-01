// Develop a for loop to calculate the sum of the first n natural numbers.
#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0;
    cout << "Enter any number:" << endl;
    cin >> n;
    if (n<1)
    {
        cout<<"You entered "<<n<<" which is not natural number"<<endl;
    }
    else{
        for (int i = 1; i <= n; i++)
        {
            sum = sum + i;
        }
        cout << "The sum of first " << n << " natural number is " << sum;
    }
    return 0;
}

// 1 + 2 + 3 + 4 + ... + n = (n * (n + 1)) / 2