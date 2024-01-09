#include<iostream>
using namespace std;

class parent
{
    protected:
    int x,y;
    public:

    void getdata()
    {
        cin>>x>>y;
    }
    int sum()
    {
        cout<<x+y<<endl;
    }
};
class child:public parent
{
    public:
    int sum()
    { 
        cout<<x*y<<endl;
    }
};
int main()
{
    child c;
    c.getdata();
    c.sum();

    parent* p;
    p = &c;
    p->getdata();
    p->sum();

}
