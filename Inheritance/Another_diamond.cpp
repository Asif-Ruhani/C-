#include<iostream>
using namespace std;
// there are 1 parent class, more than 1 child class & 1 grandson class

class parent   // this is a parent class
{
public:
    void show()
    {
        cout<<"This is a diamond structure\n";
    }

};

class child_1: public parent  // this is child class no 1 and inherits the parent class
{};
    

class child_2: public parent  // this is child class no 2 and inherits the parent class
{};
  

class grandson:public child_1, public child_2  // this is grandson class and inherits both of child classes
{

};


int main ()
{
    
    grandson g;
    //g.show();
    g.child_1::show();
    //g.child_2::show();


    return 0;
}
