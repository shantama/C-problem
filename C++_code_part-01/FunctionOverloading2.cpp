#include<iostream>
using namespace std;
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

int main()
{

    add(5,10);
    add(5.5,8.98);
}

