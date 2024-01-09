#include<iostream>
using namespace std;

class B;

class A
{
public:
    void showB(B b);
};
class B
{
private:
    int b;

public:
    B()
    {
     b = 0;
    }
    friend void A::showB(B x);
    /*{
         // Since showB() is friend of B, it can access private members of B
         cout << "b = " << x.b<<endl;
    }*/
};
void A::showB(B x)
    {
         // Since showB() is friend of B, it can access private members of B
         cout << "b = " << x.b<<endl;
    }
int main()
{
    A a;
    B b;
    a.showB(b);
    return 0;
}
