#include<iostream>
using namespace std;
class Employee
{
private:
    string name;
    double salary;
public:
    void setName(string name)
    {
        this->name=name;
    }
    string getName()
    {
        return name;
    }
    void setSalary(double salary)
    {
        this->salary=salary;
    }
    double getYearlySalary()
    {
        return salary*12;
    }
};
int main()
{
    Employee obj;
    string name;
    double salary;
    cout<<"enter name = ";
    cin>>name;
    cout<<"enter salary =";
    cin>>salary;
    obj.setName(name);
    obj.setSalary(salary);
    cout<<"name = "<<obj.getName()<<endl;
    cout<<"salary = "<<obj.getYearlySalary()<<endl;
}
