#include<iostream>
using namespace std;

int main ()
{
   int x;
   cout<<"How many time the loop run for break statement :  ";
   cin>> x;

   for(int i=0; i<x; ++i)
   {
       if(i==13)
       {
          break;  // It will stop the loop
       }
       cout << i <<endl;
   }

   // Continue statement

    cout<<"How many time the loop run for continue statement :  ";
   cin>> x;

   for(int i=0; i<x; ++i)
   {
       if(i==13)
       {
          continue;  // continue means passing the value
       }
       cout<< i <<endl;
   }


    return 0;
}
