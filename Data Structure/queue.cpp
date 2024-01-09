#include<iostream>
#include<queue>
using namespace std;

int main()
{
    int i,x[10],n,flag=0;
    queue<int>q;
    queue<int>qu;
    for(i=0;i<5;i++)
    {
       cin>>x[i];
       q.push(x[i]);
    }
    cin>>n;
    for(i=0;i<n;i++)
    {
        if(n==x[i])
        {
            flag++;
            break;
        }
    }
    if(flag==1)
    {
        for(i=0;i<5;i++)
        {
            qu.push(112*q.front());
            q.pop();
        }
        for(i=0;i<5;i++)
        {
            cout<<" "<<qu.front();
            qu.pop();
        }
    }
    else 
    {
        for(i=0;i<5;i++)
        {
            qu.push(112+q.front());
            q.pop();
        }
        for(i=0;i<5;i++)
        {
            cout<<" "<<qu.front();
            qu.pop();
        }
    }
  
}