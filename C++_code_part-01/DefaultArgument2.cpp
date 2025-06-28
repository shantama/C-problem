#include<iostream>
using namespace std;
class summation
{
public:
    void add(double a,double b,double c=0,double d=0)
    {
        double result=a+b+c+d;
        cout<<"sum = "<<result<<endl;
    }
};
int main()
{
    summation obj;
    obj.add(10,4.5);
    obj.add(10,5,6.3);
    obj.add(10,9,7,6);
}
