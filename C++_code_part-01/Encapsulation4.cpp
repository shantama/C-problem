#include<iostream>
using namespace std;
class Circle
{
private:
    double radius;
public:
    void setRadius(double radius)
    {
        this->radius=radius;
    }
    double calcArea()
    {
        return 3.1416*radius*radius;
    }
};
int main()
{
    Circle obj;
    obj.setRadius(4.6);
    cout<<"area = "<<obj.calcArea();
}
