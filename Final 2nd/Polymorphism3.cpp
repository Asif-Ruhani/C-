#include<iostream>
using namespace std;

class Animal
{
public:
     virtual void show()
    {
        cout<<"Animal"<<endl;
    }
};
class Dog: public Animal
{
public:
    void show()
    {
        cout<<"Dog"<<endl;
    }
};
int main()
{
    Animal *a[2];
    for(int i=0;i<2;i++)
    {
        a[i]=new Dog;
        a[i]->show();
    }
    return 0;
}
