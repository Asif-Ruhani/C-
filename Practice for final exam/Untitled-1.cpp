#include <iostream>
using namespace std;
// define a base class
class bird
{
public:
 // display function of the base class
 void display()
 {
 cout << "I am the display function of the base class";
 cout << "\n\n";
 }
};
class parrot:public bird
{
public:
 // display function of the serived class
 // this function will display()
 // of base class override at run time
 void display()
 {
 cout << "I am the display function of the derived class";
 cout << "\n\n";
 }
};
int main()
{
 // create objects of base and child classes
 bird b;
 parrot p;
// b.display();
 p.display();
}
