#include<iostream>
using namespace std;
/*class Test
{
public:
    int x;
    mutable int y;
    Test()
    {
        x = 1;
        y = 2;
    }
};

int main()
{
    const Test t1;
    t1.y = 3;
    cout<<t1.y<<endl;
    return 0;
} */

//extern storage class
int x=2;

int main()
{
    extern int x;
    x = 2;
    cout<<x<<endl;
    return 0;
}
