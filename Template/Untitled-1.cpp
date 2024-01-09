#include<iostream>
using namespace std;

template <class student>

student swapping(student &s1, student &s2)
{
   student temp;
   temp = s1;
   s1=s2;
   s2=temp;

}

int main()
{
    int x,y;
    double a,b;
    cout<<"Enter integers value : ";
    cin>>x>>y;
    swapping(x,y);
    cout<<"now x = "<<x<<endl;
    cout<<"now y = "<<y<<endl;

    cout<<"Enter double value : ";
    cin>>a>>b;
    swapping(a,b);
    cout<<"now a = "<<a<<endl;
    cout<<"now b = "<<b<<endl;


  return 0;
}