#include<iostream>
using namespace std;

int main()
{
    int i,t,count=0;
    cin>>t;
    if(t>24)
    {
        for(i=t-1;i>=24;i--)
        { count++;}
        cout<<count<<endl;
     }
    else 
    cout<<t<<endl;

   
}