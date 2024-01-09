#include<bits/stdc++.h>
using namespace std;

int main()
{
   long int a[200000],i,j,flag,n;
    cout<<"Enter n : ";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);

  for(i=1;i<=a[0];i++)
   {  
    flag=0;
    for(j=0;j<n;j++)
  
    {
        if(a[j]%i==0)
        {
           flag++;
        }
        else 
        break;
    }
    if(flag==n)
    {
           cout<<i<<endl;
    }
  }
  return 0;

}