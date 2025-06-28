  #include<iostream>
using namespace std;
class Person
{
private:
    string name;
    int age;
public:
    Person(string name,int age)
    {
       this-> name=name;
       this-> age=age;
    }
    Person(const Person &obj)
    {
        this->name=obj.name;
       this-> age=obj.age;
    }
    void display()
    {
        cout<<"Name = "<<name<<endl;
        cout<<"Age = "<<age<<endl;
    }
};
int main()
{
    Person obj1("apple",20);
    Person obj2("orange",24);
    cout<<"Before using copy constructor :"<<endl;
    obj1.display();
    obj2.display();
    cout<<endl;
    cout<<"After using copy constructor :"<<endl;
    obj2=obj1;
    obj1.display();
    obj2.display();

}
