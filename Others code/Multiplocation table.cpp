#include<iostream>
using namespace std;

int main ()
{
    int x,i,mul=1;
    cout<<"Enter a number :";
    cin>> x;
    for(i=1; i<=10; ++i)
    {
        mul=x*i;
        cout << x << " X " << i << " = " << mul << endl;
    }



    return 0;
}
