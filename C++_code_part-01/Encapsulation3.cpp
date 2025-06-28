#include<iostream>
using namespace std;
class Box
{
private:
    double length,breadth,height;
public:
    void setLength(double length)
    {
        this->length=length;
    }
    void setBreadth(double breadth)
    {
        this->breadth=breadth;
    }
    void setHeight(double height)
    {
        this->height=height;
    }
    double calcVolum()
    {
        return length*breadth*height;
    }
};
int main()
{
    Box obj;
    obj.setLength(20);
    obj.setHeight(6.7);
    obj.setBreadth(3.5);
    cout<<"volume = "<<obj.calcVolum();
}
