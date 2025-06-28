#include<iostream>
using namespace std;
class Rectangle
{
private:
    double length;
    double breadth;
public:
    void setLength(double length)
    {
      this->length=length;
    }
    void setBreadth(double breadth)
    {
        this->breadth=breadth;
    }
    double calcArea()
    {
        return length*breadth;
    }
};
int main()
{
    Rectangle obj;
    double length,breadth;
    cout<<"enter length and breadth =";
    cin>>length>>breadth;
    obj.setLength(length);
    obj.setBreadth(breadth);
    cout<<"area = "<<obj.calcArea();

}
