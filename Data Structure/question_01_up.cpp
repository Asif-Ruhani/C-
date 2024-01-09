#include<iostream>
using namespace std;
#include<stack>

int main()
{
    stack<int>st;
    stack<int>s;
    int i,n,x[10],flag=0;
    for(i=0;i<6;i++)
    {
        cin>>x[i];
        st.push(x[i]);
    }
    cin>>n;
    for(i=0;i<6;i++)
    {
         if(n==x[i])
        {
           flag++;
           break;
        }
    }
    if(flag==1)
    {
        for(i=0;i<6;i++)
        {
            s.push(112*x[i]);
            cout<<" "<<s.top();
            s.pop();

        }
      
    }
    else 
    {
       for(i=0;i<6;i++)
        {
            s.push(112+x[i]);
            cout<<" "<<s.top();
            s.pop();
        }
        
    }
    return 0;
}