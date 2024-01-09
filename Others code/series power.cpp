#include<iostream>
#include<conio.h>
#include<cmath>
using namespace std;

int main ()
{
    int n,i,sum=0,x;
    cout<<" Enter the value of N : ";
    cin>> n;
    for(i=1; i<=n; ++i)
    {
        sum = sum + i*i; // joto power toto bar i gun hobe
    }
     cout<< "Total summation is = " << sum << endl;

     // Another way

      cout<< "Enter the power : ";
      cin>> x;
      for(i=1; i<=n; ++i)
    {
        sum = sum + pow(i,x); // for this function we have to use <cmath> header file
    }
     cout<< "Total summation is = " << sum << endl;




     return 0;
}
