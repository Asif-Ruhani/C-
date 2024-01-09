#include<iostream>
#include<conio.h>
using namespace std;

int main ()
{
    int x,y,ans;

    cout<<"Enter the value of x & y :";
    cin>> x >> y;

    ans = x&y;  // Bitwise and
    cout<<"The ans is = " <<ans <<endl;

    ans = x|y; // Bitwise OR
    cout<<"The ans is = " <<ans <<endl;

    ans = x^y; // Bitwise X-OR
    cout<<"The ans is = " <<ans <<endl;

    ans = x<<3;
    cout<<ans<<endl;

    ans = y>>3;
    cout<<ans<<endl;





    return 0;
}
