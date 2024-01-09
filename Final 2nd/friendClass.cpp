#include<iostream>
using namespace std;

class Alpha
{
private:
    int data1;
public:
    Alpha()
    {
        data1 = 99;
    }
    friend class Beta;
};
class Beta
{
public:
    void func1(Alpha a)
    {
        cout<<"Data: "<<a.data1<<endl;
    }
    void func2(Alpha b)
    {
        cout<<"Data: "<<b.data1<<endl;
    }
};
int main()
{
    Alpha a;
    Beta b;
    b.func1(a);
    b.func2(a);

    return 0;
}
