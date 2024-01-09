#include<iostream>
using namespace std;

class A
{
public:
    void show()
    {
        cout<<"A"<<endl;
    }
};
class B: public A
{

};
class C: public A
{

};
class D: public B,public C
{

};
int main()
{
    B b;
    C c;
    b.show();
    c.show();
    D d;
    d.show();
    return 0;
}

