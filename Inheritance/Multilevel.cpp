#include<iostream>
using namespace std;
// this is as grandfather to parent to frandson like (A>B>C>D>E)

class grandfather
{
  public:
       void show()
       {
          cout<<"This a multilevel structure\n";
       }

};
class parent:public grandfather
{
   public:
       void show_1()
       {
           cout<<"this is parent class\n";
       }
};
class child:public parent
{
   public:
       void show_2()
       {
           cout<<"this is child class\n";
       }
};
class grandson:public child
{
      public:
       void show_3()
       {
           cout<<"this is grandson class\n";
       }
};

int main ()
{
    grandson g;
    g.show();
    g.show_1();
    g.show_2();
    g.show_3();


}
