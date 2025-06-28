#include<iostream>
using namespace std;
class Volume
{
    public:

        void vol(int a)
        {
            int v=a*a*a;
            cout<<"volume of cube = "<<v<<endl;
        }
        void vol(double r)
        {
            double v=(4*3.1416*r*r*r)/3;
            cout<<"volume of sphere ="<<v<<endl;
        }
        void vol(double r,double h)
        {
            float v=3.1416*r*r*h;
            cout<<"volume of cylinder ="<<v<<endl;
        }
};
int main()
{

    Volume obj;
    obj.vol(5);
    obj.vol(6.7);
    obj.vol(2,6.8);
}
