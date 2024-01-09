#include<iostream>
using namespace std;
class Test
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
    //t1.x=2;
    cout<<"Y = " <<t1.y << endl ;
    cout<< "X = "<< t1.x << endl;
    return 0;
}

//extern storage class
/*int x=3;

int main()
{
    extern int x;
    x = 2;
    cout<<x<<endl;
    return 0;
}*/


