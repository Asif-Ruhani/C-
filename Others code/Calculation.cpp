#include<iostream>
using namespace std;

int main ()
{
   int sum,sub,mul,reminder;
   double div;
   int x,y;

   cout<<"Enter value of x & y";
   cin>> x >> y;
   sum = x+y;
   sub = x-y;
   mul = x*y;
   reminder = x%y;

   div = (float)x/y; //type casting for floating ans
   cout<<"The summation is " <<sum <<endl
   <<"The substration is " << sub <<endl
   <<"The multiplication is " <<mul <<endl
   <<"The division is " <<div <<endl
   <<"The reminder is " <<reminder <<endl;

   return 0;
}
