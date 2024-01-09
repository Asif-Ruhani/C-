#include<iostream>
using namespace std;

int main()
{
    int i,x[4];
    for(i=0;i<4;i++)
    {
        cin>>x[i];
    }
    int sum1=x[0]+x[2];
    int sum2=x[1]+x[3];
    if(sum1>sum2)
    cout<<sum1<<endl;
    else 
    cout<<sum2<<endl;
}