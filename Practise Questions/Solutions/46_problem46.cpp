// Write a program using inheritance to model employee and manager classes.
#include <iostream>
using namespace std;
class Employee
{
private:
    static int count;
    int empId;
    string role;

protected:
    float salary;
    string name;

public:
    void setData(string n, int id, float x, string r = "Employee") // Default role will be Employee
    {
        empId = id;
        name = n;
        salary = x;
        role = r;
        count++;
    }
    void getData()
    {
        cout << "Details of Employee " << count << endl;
        cout << "Name: " << name << endl
             << "Id: " << empId << endl
             << "Role: " << role << endl
             << "Salary: " << salary << endl;
    }
};

int Employee::count = 0; // Making count variable to count the number of employee created

class Manager : public Employee
{
private:
    int workingHour; // Adding extra data member to Manager class

public:
    void setWorkingHour(int w)
    {
        workingHour = w;
    }
    void showWorkingHour()
    {
        cout << "Working Hour: " << workingHour << "hrs" << endl;
    }
};

int main()
{
    Employee e1, e2;
    e1.setData("Ram", 102, 8000);
    e1.getData();
    e2.setData("Harish", 105, 10000, "Team Lead");
    e2.getData();
    Manager m1;
    m1.setData("Vivek", 100, 30000, "Manager");
    m1.getData();
    m1.setWorkingHour(3);
    m1.showWorkingHour();
    return 0;
}