#include<iostream>
using namespace std;
class Account{
    public:
    float salary = 60000;
};
class Programmer: public Account{
    public:
    float bonus = 5000;
};
int main()
{
    Programmer p;
    cout<<"salary"<<p.salary<<endl;
    cout<<"bonus"<<p.bonus<<endl;
    return 0;
}

