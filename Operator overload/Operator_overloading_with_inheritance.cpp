#include<iostream>
using namespace std;

class parent
{  protected:
      int x;
   public:
      parent()
      {
        x=5;
      }   
      void operator++()
      {
        ++x;
      }
      void operator--(int)
      {
        x--;
      }
      void show()
      {
        cout<<"The value of x : "<<x<<endl;
      }
  
};

class child:public parent
{   public:
     parent::operator++;
     parent::operator--;
       void operator++(int)
       {  
        x++;
       }
       void operator--()
       {
        --x;
       }

};

int main()
{
     child c;
     c.show();
     c++;
     c.show();
     --c;
     c.show();
     ++c;
     c.show();
     c--;
     c.show();


    return 0;
}