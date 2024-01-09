#include<iostream>
using namespace std;

int main ()
{
   int x,y;
   //First test of increasing
   cout<<"Enter the value of x :";
   cin>> x;
   y = x++;
   cout<<"The value of x = " <<x <<endl;
   cout<<"The value of y = " <<y <<endl<<endl;

   //Second test of increasing
   cout<<"Enter the value of x :";
   cin>> x;
   y = ++x;
   cout<<"The value of x = " <<x <<endl;
   cout<<"The value of y = " <<y <<endl<<endl;

   //First test of decreasing
   cout<<"Enter the value of x :";
   cin>> x;
   y = x--;
   cout<<"The value of x = " <<x <<endl;
   cout<<"The value of y = " <<y <<endl<<endl;

   // Second test of decreasing
   cout<<"Enter the value of x :";
   cin>> x;
   y = --x;
   cout<<"The value of x = " <<x <<endl;
   cout<<"The value of y = " <<y <<endl;

   return 0;
}
