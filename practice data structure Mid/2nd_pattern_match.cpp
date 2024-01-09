#include<bits/stdc++.h>
using namespace std;

int main()
{
    string txt,pt;
    cout<<"Enter text ";
    cin>>txt;
    cout<<"Enter pattern ";
    cin>>pt;
    int n,m,i,j;
    n=txt.length();
    m=pt.length();
    for(i=0;i<=n-m;i++)
    {
       for(j=0;j<m;j++)
       {
          if(pt[j]==txt[j+i])
          {
            pt[j]=txt[i+j];
          }
          if(pt[j]!=txt[i+j])
          {
            
          }
       }
    }

}