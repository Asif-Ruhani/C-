#include<iostream>
using namespace std;

class A
{ 
    protected:
    int x;
    public:
    A()
    {
        x=0;
    }
    void getdata()
    {
        cout<<"Enter numbers to compare : ";
        cin>>x;
    }
    int operator==(A a)
    {
        if(x==a.x)
        {
            return 1;
        }
        else 
        {
            return 0;
        }
    }

};
class B: public A
{

};
class C: public A
{

};
class D: public A
{

};
class E: public B, public C, public D
{

};
class F: public D
{

};
class G: public E, public F
{

};

int main()
{
    E e;
   // e.getdata();
    F f;
    f.getdata();
    G g;
   // g.getdata();
}