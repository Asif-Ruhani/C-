#include<iostream>
#include<conio.h>
using namespace std;

int main ()
{ // All positive value is absolute value
  int x;
  cout<<"Enter any number :";
  cin>> x;

  if(x<0)
  {
      cout<< "The absolute value is = " <<(-x) <<"\n";
  }
  else if(x==0)
  {
      cout<< "The absolute value is = " << x <<"\n";
  }
  else
  {
      cout<<"The absolute value is = " << x <<"\n";
  }


    return 0;
}
