#include<iostream>
using namespace std;
class Area
{
public:
    void calcArea(double a,double b=1)
    {
         if(b >1)
        {
            double area=a*b;
            cout<<"area = "<<area<<endl;

        }

        else
        {
          double area=a*a;
            cout<<"area = "<<area<<endl;

        }

    }
};
int main()
{
    Area obj;
    obj.calcArea(5);
    obj.calcArea(10.0,5);
}
