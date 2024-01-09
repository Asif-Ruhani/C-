#include<iostream>
using namespace std;

class parent
{
public:
    int Public;
protected:
    int Protect;
private:
   int Private;
};

class child_1:public parent
{
   public:
       int get_Public()
       {
           cin>>Public;
           return Public;
       }
       int get_Protect()
       {
           cin>>Protect;
           return Protect;
       }
        // Here Public variable is public
         // Here Protect variable is protected
         // Here Private variable is private
};
class child_2:protected parent
{
        /* int get_Protect_1()
       {
           cin>>Protect;
           return Protect;
       }*/
         // Here Public & Protect variables are protected
         // Here Private variable is private
};
class child_3:private parent
{
    //Here all variables are private
};

int main ()
{
    int x,y,z;
    child_1 c1;
    //child_2 c2;
    x=c1.get_Public();
    y=c1.get_Protect();
    //z=c2.get_Protect_1();
    cout<<x<<endl;
    cout<<y<<endl;
    //cout<<z<<endl;

  return 0;
}
