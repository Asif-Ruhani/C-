#include<iostream>
#include<conio.h>
using namespace std;

int main ()
{
  int a;
  float b;
  long c;
  double d;
  char e;
  char f[15];
  long long g;

  int x = sizeof(a);
  cout<<"The size of an integer is "<<x <<" byte" <<endl<<endl;

  int y = sizeof(b);
  cout<<"The size of a float is " <<y <<" byte" <<endl<<endl;

  int z = sizeof(c);
  cout<<"The size of a long is "<<z <<" byte" <<endl<<endl;

  int n = sizeof(d);
  cout<<"The size of a double  is "<<n <<" byte" <<endl<<endl;

  int m = sizeof(e);
  cout<<"The size of a character is "<<m <<" byte" <<endl<<endl;

   int o = sizeof(f);
  cout<<"The size of a string is "<<o <<" byte" <<endl<<endl;

  int p = sizeof(g);
  cout<<"The size of a long long is "<<p <<" byte" <<endl<<endl;



    return 0;
}
