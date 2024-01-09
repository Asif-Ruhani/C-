#include<iostream>
using namespace std;

int main()
{
    int i,j,t;
    cin>>t;
    char s[3];
    for(i=0;i<t;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>s[j];
            s[j]=toupper(s[j]);
        }
        j=0;
        if(s[j]=='Y' && s[j+1]=='E' && s[j+2]=='S'){
        	  cout<<"YES"<<endl;}
            else cout<<"NO"<<endl;
    }
   return 0;
}