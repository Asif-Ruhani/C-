#include<iostream>
using namespace std;


class child_1 
{
  protected:
  int z;
public:
    child_1()
    {
       cout<<"child_1 constructor is called"<< endl;
    }
    child_1(int p)
    {
        z=p;
    }
};

class child_2 
{
  protected:
  double q;
public:
    child_2()
    {
        cout<<"child_2 constructor is called"<< endl;
    }
    child_2(double s)
    {
        q=s;
    }
};

class grandson : public child_1, public child_2
{  private:
string t;
public:
    grandson()
    {
        t="\0";
        cout<<"grandson constructor is called"<< endl;
    }
    grandson(int p,double s,string c): child_1(p),child_2(s)
    {
        t = c;
    }
    void show()
    {
        cout<<z<<endl;
        cout<<q<<endl;
        cout<<t<<endl;

    }
};

int main()
{
    grandson g(9,3.5,"asif");
    g.show();
    //When i use constructor,I will create an object and all constructor will be called automatically.
    // because constructors do not need to calling, it's automatically called when an object is created
}

