#include<iostream>
using namespace std;

class akhlas;

class asif
{
private:
    int x,y;
public:
    void getdata()
    {
        cout<<"Enter the value of x & y : ";
        cin>>x>>y;
    }
    void sum(akhlas ak);
    // it is a member function of asif , but data type & object is akhlas's class
    // because this function will be a friend of akhlas's class

};
class akhlas
{
private:
    int p,q;
public:
     void getdata()
    {
        cout<<"Enter the value of p & q : ";
        cin>>p>>q;
    }
    friend void asif::sum(akhlas ak);
    // i did not calculate the sum in this scope, because sum is not a member funcion of akhlas's class
    // because it's a friend of akhlas's class but not akhlas's member function
   /* {
        cout<<"sum is : "<<as.p+as.q<<endl;
    }*/
};

void asif::sum(akhlas ak)
//since sum funcion is a friend of akhlas's class , that's why it can use the private properties of akhlas's class,ex: p & q
    {
        cout<<"sum is : "<<ak.p+ak.q<<endl;
    }


int main ()
{
    asif as;
    akhlas ak;
    ak.getdata();
    as.sum(ak);
    // sum is friend of akhlas's frined but still a member function os asif's class, that's why we have to use access operator, as.sum
   // if i have written in asif's class [ friend void sum() ], then it would not be a member function of asif's class
}
