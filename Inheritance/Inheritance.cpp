#include<iostream>
using namespace std;
class A
{
    public:
    void display()
    {
        cout<<"display super class function \n";
    }

};
class B: public A
{
    public:
    void show()
    {
        cout<<"show sub class function";
    }
};
int main()
{
    B obj;
    obj.display();
    obj.show();
    return 0;
}
