#include<iostream>
using namespace std;

template<class student>
student addition(student s1, student s2)
{
    /*student temp;
    temp=s1+s2;
    return temp;*/
    cout<<s1+s2<<endl;
}
int main()
{
     int x,y;
    double a,b;
    cout<<"Enter integers value : ";
    cin>>x>>y;
    addition(x,y);
    //cout<<addition(x,y)<<endl;
}