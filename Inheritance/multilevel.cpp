#include<iostream>
using namespace std;
class animal
{
    public:
    void eat()
    {
        cout<<"eating"<<endl;
    }
};
class dog : public animal
{
    public:
    void bark()
    {
        cout<<"barking"<<endl;
    }
};
class babydog : public dog{
    public:
    void weep()
    {
        cout<<"weeping"<<endl;
    }
};
int main()
{
    babydog obj;
    obj.eat();
    obj.bark();
    obj.weep();
}