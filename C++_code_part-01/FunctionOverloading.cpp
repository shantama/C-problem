#include<iostream>
using namespace std;
class Addition
{
public:
    void add(int a,int b)
    {
        int result=a+b;
        cout<<"sum= "<<result<<endl;
    }
    void add(double a,double b)
    {
        double result=a+b;
        cout<<"sum = "<<result<<endl;
    }
};
int main()
{
    Addition obj;
    obj.add(5,10);
    obj.add(5.6,8.98);
}
