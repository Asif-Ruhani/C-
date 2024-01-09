#include<iostream>
using namespace std;

int main()
{
int x = 10;
int& refer = x;  // ref is a reference to x.
refer = 20;  // Value of x is now changed to 20
cout << "x = " << x << endl ; // Value of x is now changed to 30
x = 30;
cout << "ref = " << refer << endl ;
return 0;
}
