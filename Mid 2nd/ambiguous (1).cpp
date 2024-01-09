#include<iostream>
using namespace std;

class Ambigious
{
    //double d;
    //char c;
    int a;
public:
   /* float myfunc(float i)
    {
        return i;
    }
    double myfunc(double i)
    {
        return i;
    }
   char myfunc(unsigned char s)
    {
        return s-1;
    }
    char myfunc(char s)
    {
        return s+1;
    }*/
    int myfunc(int i)
    {
        return i;
    }
    int myfunc(int i,int j=1)
    {
        return i*j;
    }
};
int main()
{
    Ambigious a1,a2;
    //cout<<a1.myfunc(10.1);
    //cout<<a2.myfunc(10);
    //cout<<a1.myfunc('c'); //this calls myfunc(char)
   // a2.myfunc(88);
     cout<<a1.myfunc(4,5);
   //  cout<<a2.myfunc(10);
    return 0;
}
