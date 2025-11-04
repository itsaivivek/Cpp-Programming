#include <iostream>
using namespace std;

template <class T>

class Harry
{
public:
    T data;
    Harry(T a)
    {
        data = a;
    }

    void display();
};

template <class T>
void Harry<T>::display()
{
    cout << data << endl;
}

void func(int a)
{
    cout << "I am first func() " << a << endl;
}

template <class T>
void func(T a)
{
    cout << "I am templatized func() " << a << endl;
}

template <class T>
void func1(T a)
{
    cout << "I am templatized func() " << a << endl;
}

int main()
{
    Harry<int> h(5);
    Harry<float> h1(5.7);
    Harry<char> h2('c');
    cout << h.data << endl;
    h1.display();
    h2.display();

    func(4); //Exact match takes the highest priority
    func1(4.6); // If no exact match then template function work

    return 0;
}