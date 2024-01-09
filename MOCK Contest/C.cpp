#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,i,j,count=2;
    cin>>t;
    char s[50];
    for(i=0;i<t;i++)
   {
        cin>>n;
        for(j=0;j<n;j++)
        {
            cin>>s[j];
        }
        sort(s,s+n);
       
        for(j=0;j<n-1;j++)
        {
            if(n==1)
            {count=count;}
            if(s[j]==s[j+1])
            {count=count+1;}

            if(s[j]!=s[j+1])
            {count=count+2;}
        }
        cout<<count<<endl;
        count=2;

    }
}