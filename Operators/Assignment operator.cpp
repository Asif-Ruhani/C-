#include<iostream>
using namespace std;

int main ()
{
    int a,b;
    cout<<"Enter the         value of a and b :";
    cin>> a >> b;
    a+=b;   // a=a+b;
    cout<<"Now the value of a is = " <<a <<endl;

    a-=b;  //a=a-b;
    cout<<"Now the value of a is = " <<a <<endl;

    a*=b;   //a=a*b;
    cout<<"Now the value of a is = " <<a <<endl;

    a/=b;   //a=a/b;
    cout<<"Now the value of a is = " <<a <<endl;

    return 0;
}
