#include<iostream>
using namespace std;
class Area
{
public:
    void calcArea(double a)
    {
        double area=a*a;
        cout<<"Area of square = "<<area<<endl;
    }
    void calcArea(double a,double b)
    {
        double area=a*b;
        cout<<"Area of rectangle = "<<area<<endl;
    }
};
int main()
{
    Area obj;
    obj.calcArea(4.6);
    obj.calcArea(4.6,7);

}
