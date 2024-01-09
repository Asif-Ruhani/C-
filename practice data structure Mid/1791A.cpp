#include<bits/stdc++.h>
using namespace std;

int main()
{
   string s="codeforces";
    int t,i,n,flag=0;
    cout<<"Enter test case ";
    cin>>t;
    char arr[26];
    for(i=0;i<t;i++)
    {
           cin>>arr[i];
    }
    n=s.length();
    for(i=0;i<t;i++)
    {
       for(int j=0;j<n;j++)
       {
        if(arr[i]==s[j])
        {

            cout<<"YES"<<endl;
            break;
        }
        else 
        flag++;
      }
     if(flag==1)
     cout<<"NO"<<endl;
     
    }
   
}