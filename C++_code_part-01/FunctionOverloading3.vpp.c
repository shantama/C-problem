#include<iostream>
using namespace std;
class print
{
public:
    void print(int a)
    {
        cout<<"interger number = "<<a<<endl;
    }
        void print(double a)
    {
        cout<<"double number = "<<a<<endl;
    }
        void print(string a)
    {
        cout<<"string = "<<a<<endl;
    }
};
int main()
{
    print obj;
    obj.print(45);
    obj.print(4.95);
    obj.print("cse1307");

}
