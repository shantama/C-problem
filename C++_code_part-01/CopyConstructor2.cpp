#include<iostream>
using namespace std;
class Animal
{
private:
    string name;
    string species;
    int age;
public:
    Animal(string name,string species,int age)
    {
        this->name=name;
        this->species=species;
        this->age=age;
    }
        Animal(const Animal &obj)
    {
        this->name=obj.name;
        this->species=obj.species;
        this->age=obj.age;
    }
    void display()
    {
        cout<<"Name = "<<name<<endl;
        cout<<"Species = "<<species<<endl;
        cout<<"age = "<<age<<endl;
    }

};
int main()
{
    Animal obj1("Tiger","meamal",2);
    Animal obj2=obj1;
    obj1.display();
    cout<<endl;
    obj2.display();
}
