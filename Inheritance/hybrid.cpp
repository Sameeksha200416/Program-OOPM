#include<iostream>
using namespace std;
class A
{
    public:
    void display()
    {
        cout<<"super class display function"<<endl;
    }
};
class B : public A{
    public:
    void show()
    {
        cout<<"ssubclass show function"<<endl;
    }
};
class C: public A{
    public:
    void dipslay1()
    {
        cout<<"subclass display1 func"<<endl;
    }
};
class D: public B,public C{
    public:
    void display2()
    {
        cout<<"sub-sub display2 function"<<endl;
    }
};
int main()
{
    D obj;
    obj.dipslay1();
    obj.show();
    obj.display2();
    B obj1;
    obj1.display();
    return 0;
}

