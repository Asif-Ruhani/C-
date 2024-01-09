#include<iostream>
using namespace std;

template<class student>
student Maximum(student s1, student s2)
{
    return(s1>s2)? s1:s2;
}
int main()
{
     int x,y;
    double a,b;
    cout<<"Enter integers value : ";
    cin>>x>>y;
    cout<<Maximum(x,y)<<endl;
}