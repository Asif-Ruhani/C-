#include<iostream>
using namespace std;
// 1 parent class & more than 1 child class

class parent
{
public:
    void show ()
    {
        cout<<"This is a hierarchical structure \n";
    }
};
class child_1:public parent
{

};
class child_2:public parent
{

};
class child_3:public parent
{

};

int main ()
{
    child_1 c1;
    c1.show();
    child_2 c2;
    c2.show();
    child_3 c3;
    c3.show();


    return 0;
}
