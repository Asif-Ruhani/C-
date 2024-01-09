#include<iostream>
using namespace std;

class operator_overload_1
{
  protected:
  int x;
  public:
     operator_overload_1()
     {
       x=5;
     }
     void operator ++()
     {
      ++x;
     }
     void operator--()
     {
       --x;
     }


};

class operator_overload_2:public operator_overload_1
{
  public:
  operator_overload_1::operator++;
  operator_overload_1::operator--;
     void operator++(int)
     {
        x++;
     }
     void operator--(int)
     {
        x--;
     }

    void show()
    {
        cout<<x<<endl;
    }

};

int main ()
{

      operator_overload_2 op;
      op++;
      op.show();
      op--;
      op.show();
      --op;
      op.show();
      ++op;
      op.show();

    return 0;
}