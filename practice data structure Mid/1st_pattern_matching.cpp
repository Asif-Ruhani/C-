#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    int n,i,j,flag=0;
    char text[]={'a','b','a','a','a','b','b','a','a','\0'};
    cout<<"How many character do you want to match : ";
    cin>>n;
    char pattern[n];
    for(i=0;i<n;i++)
    {
        cin>>pattern[i];
    }
    for(i=0;i<9-n+1;i++)
    {
        for(j=0;j<n;j++)
        {
            if('pattern[j]'=='text[j+i]')
            {
                  flag=flag+1;
                  if(flag==n)
                  {
                       cout<<"the pattern is matched"<<endl;
                       break;
                  }
            }
            
            else 
             break;
        }
        if(flag==n)
        break;
    }
    
    
}