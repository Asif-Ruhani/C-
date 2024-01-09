#include<iostream>
using namespace std;

class parent
{
    private:
    int w=1,x=2;
    protected:
    int y=3,z=4;
    public:
    int a=5,b=6;
    
    void show_1()
     {
        cout<<"Sum of w & x is "<<w+x<<endl;
     }
   

    
};

class child_1:private parent
{
 public:
     //show_1() inherited from base class 
      void show_2()
     {
        cout<<"Sum of y & z is "<<y+z<<endl;
     }
  void show_3()
    {
        cout<<"Sum of a & b is "<<a+b<<endl;
    }
    
};

class child_2:protected parent
{
    public:
   // show_1 is inherited by base class
      void show_2()
     {
        cout<<"Sum of y & z is "<<y+z<<endl;
     }
  void show_3()
    {
        cout<<"Sum of a & b is "<<a+b<<endl;
    }
};

class child_3:public parent
{
  public:
  //show_1() inherited from base class 
      void show_2()
     {
        cout<<"Sum of y & z is "<<y+z<<endl;
     }
  void show_3()
    {
        cout<<"Sum of a & b is "<<a+b<<endl;
    }
};


int main()
{
 
     child_3 c3;
     c3.show_1();
     c3.show_2();
     c3.show_3();

cout<<endl<<endl;

     child_2 c2;
  //   c2.show_1();
     c2.show_2();
     c2.show_3();

     cout<<endl<<endl;

     child_1 c1;
   //  c1.show_1();
     c1.show_2();
     c1.show_3();

    return 0;
}