#include<iostream>
using namespace std;
class Rectangle
{
private:
    double width;
    double height;
public:
    Rectangle(double width,double height)
    {
        this->width=width;
        this->height=height;
    }
    Rectangle(const Rectangle &obj)
    {
        this->width=obj.width;
        this->height=obj.height;
    }
    void display()
    {
        cout<<"Width = "<<width<<endl;
        cout<<"Height = "<<height<<endl;
    }
};
int main()
{
    Rectangle obj1(5,10);
    Rectangle obj2=obj1;
    obj1.display();
    obj2.display();

}
