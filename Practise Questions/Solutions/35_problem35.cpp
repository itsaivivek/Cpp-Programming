// Implement public and private access modifiers in a class.
#include<iostream>
using namespace std;

class Employee{
    private:
        int id;
        float salary;
    public:
        string name;
        void setData(int a, float b){
            id = a;
            salary = b;
        }
        int getId(){
            return id;
        }
        float getSalary(){
            return salary;
        }
};

int main(){
    Employee emp[5];
    int id;
    float salary;
    for (int i = 0; i < 5; i++)
    {
        cout<<"Enter name of employee"<<(i+1)<<endl;
        cin>>emp[i].name;
        cout<<"Enter Id of employee"<<(i+1)<<endl;
        cin>>id;
        cout<<"Enter salary of employee"<<(i+1)<<endl;
        cin>>salary;
        emp[i].setData(id,salary);
    }
    for (int i = 0; i < 5; i++)
    {
        cout<<"Employee "<<(i+1)<<":\nName: "<<emp[i].name<<"\tId: "<<emp[i].getId()<<"\tSalary: "<<emp[i].getSalary()<<endl;
    }
    
    return 0;
}