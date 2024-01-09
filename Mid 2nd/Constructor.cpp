#include<iostream>
using namespace std;

class SUM
{
private:
    int value;
public:
    SUM()
    {
        cout<<"Default constructor initialized"<<endl;
        value = 0;
    }
    SUM(int a)
    {
        cout<<"Parameterized constructor initialized"<<endl;
        value = a;
    }
    void display()
    {
        cout<<"Value: "<<value<<endl;
    }
};
int main()
{
  SUM s1;
  SUM s2(10);
  s1.display();
  s2.display();
  return 0;


}
