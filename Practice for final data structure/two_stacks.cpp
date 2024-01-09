#include<iostream>
using namespace std;
#include<stack>

int main()
{
    stack<int>st1;
    stack<int>st2;
    int n,i,j;
    cout<<"Enter N :";
    cin>>n;
    int x[n];
    for(i=0;i<n;i++)
    {
        cin>>x[i];
        st1.push(x[i]);
    }
    for(i=0;i<n;i++)
    {
        cout<<"Top "<<st1.top()<<endl;
        st1.pop();
        cout<<"Remining data ";
        for(j=n-2-i;j>=0;j--)
        {
          st2.push(x[j]);
          cout<<st2.top()<<" ";
          st2.pop();
        }
        cout<<endl;
        

    }
}