#include<iostream>
using namespace std;

class A
{
public:
    void func()
    {
        cout<<"Class A"<<endl;
    }
};
class B:public A
{

};
class C:public A
{

};
class D:public B,public C
{

};
int main()
{
    D objD;
    objD.func();
    return 0;
}
