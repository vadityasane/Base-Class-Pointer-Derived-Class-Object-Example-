#include <iostream>

using namespace std;

class Rectangle
{
public:
    void area()
    {
        cout<<"Area of Rectangle"<<endl;
    }
};

class Cuboid : public Rectangle
{
public:
    void volume()
    {
        cout<<"Volume of Rectangle"<<endl;
    }
};
int main()
{
    //Rectangle r;
    //Cuboid *q=&r;   //cuboid cant point towards rectangle(cuboid cant be rect)

    Cuboid c;
    Rectangle *p=&c; //rectangle can ponting towards cuboid(rec can be cuboid)
    p->area();
    //p->volume();
    return 0;
}
