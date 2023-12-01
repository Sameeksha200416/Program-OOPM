#include<iostream>
using namespace std;
class A
{
    public:
    void display()
    {
        cout<<"superclass A /n"<<endl;
    }
};
class B
{
    public:
    void show()
    {
        cout<<"superclass B /n"<<endl;
    }
};
class c: public A ,public B
{
    public:
    void display1()
    {
        cout<<"subclass"<<endl;
    }
};
int main()
{
    c obj;
    obj.display();
    obj.show();
    obj.display1();
    return 0;
}