#include<iostream>
using namespace std;

class parent
{
public:
    void show_1()
    {
        cout<<"This is function show_1 \n";
    }
    void show_2()
    {
        cout<<"This is function show_2 \n";
    }
    void show_3()
    {
        cout<<"This is function show_3 \n";
    }
};
class child:public parent
{
    public:
    void show_4()
    {
        cout<<"This is function show_4 \n";
    }
};
int main()
{
    child c;
    c.show_1();
    c.show_2();
    c.show_3();
    c.show_4();

    return 0;
}

