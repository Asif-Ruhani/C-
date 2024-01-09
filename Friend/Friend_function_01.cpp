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
    friend void sum(asif as);
    /*{
         cout<<"sum is : "<<as.x+as.y<<endl;
    }*/

};
// i did not use sum function in akhlas class, because akhlas class is not a friend of asif class,sum function is friend
// but not akhlas's friend, that's why x&y is private in akhlas class, if i friend akhlas class then x&y will be used
// friend class akhlas;,,, then x&y will be used
/*class akhlas
{
public:
    void sum(asif as)
    {
        cout<<"sum is : "<<as.x+as.y<<endl;
    }
};*/

// now sum function is not a class asif's member funcion,it is a global function,no need to use scope resolution
// but data type & object will be same as i delared, sum(asif as), no change there
void sum(asif as)
{
    cout<<"sum is : "<<as.x+as.y<<endl;
}

int main ()
{
    asif a;
    //akhlas ak;
    a.getdata();
    sum(a);
    //ak.sum(a);
    //since sum() function is not a member of asif class,that's why no need to use access operator
    //ex: no need a.sum(a); it will be only sum(a);


    return 0;
}
