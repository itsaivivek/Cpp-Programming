// Extend the use of friend functions for operations on class empects.
#include <iostream>
using namespace std;

class Employee
{
private:
    int empId;
    float salary;

public:
    friend void setData(Employee &, int, int);
    friend void getData(Employee &);
};
void setData(Employee &emp, int x, int y)
{
    emp.empId = x;
    emp.salary = y;
}
void getData(Employee &emp)
{
    cout<<"The salary of employee no "<<emp.empId<<" is $"<<emp.salary<<endl;
}

int main()
{
    Employee e1, e2, e3;
    setData(e1, 10, 200);
    setData(e2, 11, 450);
    setData(e3, 12, 340);
    getData(e1);
    getData(e2);
    getData(e3);
    return 0;
}