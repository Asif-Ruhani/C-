#include<iostream>
using namespace std;

class A
{
    private:
    int a;
public:
    A()
    {
        a = 5;
    }
    friend void show(A x); //global friend function
    /*{
        cout<<"a is: "<<x.a<<endl;
    }*/
};
void show(A x)
{
    cout<<"a is: "<<x.a<<endl;
}
int main()
{
    A a;
    show(a);
    return 0;
}
