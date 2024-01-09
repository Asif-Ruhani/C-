#include<iostream>
using namespace std;

class grandfather
{  public:
    int id;
    double pay;
   void get_data()
    {
        cout<<"Enter your id : ";
        cin>>id;
        cout<<"Enter your payment : ";
        cin>>pay;
    }
    void show()
    {
        cout<<endl<<endl;
        cout<<id<<endl<<pay<<endl;
    }

};
class parent:public grandfather
{   public:
    void display()
    {
        cout<<"This is display function of parent class "<<endl;
    }
      void show()
      {  // grandfather::show();
          cout<<"This is parent class "<<endl;
      }

};
class child:public parent
{
  public:
      void show()
      {   // parent::show();
          cout<<"This is child class "<<endl;
      }

};
class grandson:public child
{
   public:
       parent::display; // this functios should be called from main function,not here,bcz not same name fo other function
      void show()
      {
          grandfather::show();
          parent::show();
          child::show();
      }
};

int main ()
{
    grandson g;
    g.get_data();
    g.show();
    g.display();


    return 0;
}
