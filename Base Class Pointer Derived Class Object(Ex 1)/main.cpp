#include <iostream>

using namespace std;

class Base{
public:
    void fun1()
    {
        cout<<"fun1 of base";
    }
} ;

class Derived : public Base{
public:
    void func2()
    {
        cout<<"fun2 of Derived";
    }
};

int main()
{
    Derived d;
    Base *p = &d;
    p->fun1();
    // p->fun2();

    return 0;
}
