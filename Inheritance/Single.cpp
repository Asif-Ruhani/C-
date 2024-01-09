#include<iostream>
using namespace std;
// 1 parent class & 1 child class

class parent
{
public:
    void show ()
    {
        cout<<"This is a single structure \n";
    }
};
class child:public parent
{

};
int main ()
{
    child c;
    c.show();
}
