#include<iostream>
using namespace std;
class multiplication
{
public:
    void multiply(double a,double b,double c=1,double d=1)
    {
        double result=a*b*c*d;;
        cout<<"mul = "<<result<<endl;
    }
};
int main()
{
    multiplication obj;
    obj.multiply(10,4.5);
    obj.multiply(10,5,6.3);
    obj.multiply(10,9,7,6);
}

