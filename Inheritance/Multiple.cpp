#include<iostream>
using namespace std;
// More than 1 parent classes & 1 child class

class parent_1
{
  public:
       void show_1()  // i can not use the same name for both function ,that's way use show_1 & show_2
       {
           cout<<"This a multiple structure\n";
       }
};
class parent_2
{
  public:
       void show_2()
       {
           cout<<"I can't use the same name of 2 functions\n";
       }
};
class child:public parent_1,public parent_2
{

};

int main ()
{
   child c;
   c.show_1();
   c.show_2();
}
