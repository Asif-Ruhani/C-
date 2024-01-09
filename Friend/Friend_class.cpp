#include<iostream>
using namespace std;

class asif
{
private:
    int x,y;
public:
    asif()
    {
        x=0;
        y=0;
    }
    void getdata()
    {
        cout<<"Enter the value of x & y : ";
        cin>>x>>y;
    }
      friend class akhlas;
      // akhlas is a friend of asif & he use aisf's private or protected property

};
class akhlas
{
public:

    //since akhlas will asif's private property, that's why data type & object have to be asif's (asif as)
    void sum(asif as)
    {
        int a = as.x+as.y;
        cout<<"sum is : "<<a<<endl;
    }

};

int main ()
{
    asif as;
    akhlas ak;
    as.getdata();
    ak.sum(as);

    return 0;
}
