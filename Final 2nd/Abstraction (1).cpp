#include<iostream>
using namespace std;

class Base
{
public:
    virtual void show()=0;
};
class Derv1: public Base
{
public:
    void show()
    {
        cout<<"child class";
    }
};
class Derv2: public Base
{
    void show()
    {
        cout<<"child class2";
    }
};
int main()
{
   
    Derv1 dv1;
    Derv2 dv2;

    Base* b;
    
    b = &dv1;
    b->show();

    b = &dv2;
    b->show();
}
