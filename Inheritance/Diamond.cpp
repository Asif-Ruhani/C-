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

class child_1:virtual public parent  // this is child class no 1 and inherits the parent class
{
    // if i did not use virtual then grandson class didn't identify from where
   // will it take the function , from child1 or child2 because it inherits both of them
};

class child_2:virtual public parent  // this is child class no 2 and inherits the parent class
{
   // if i did not use virtual then grandson class didn't identify from where
   // will it take the function , from child1 or child2 because it inherits both of them
};

class grandson:public child_1, public child_2  // this is grandson class and inherits both of child classes
{

};


int main ()
{
    child_1 c1;
    c1.show();
    child_2 c2;
    c2.show();
    grandson g;
    g.show();


    return 0;
}
