#include<iostream>
#include<stack>
using namespace std;

int main()
{
    stack<int>st;
    int n,i,x;
    cout<<"Enter N : ";
    cin>>n;
    i=0;
    while(i<n)
    {
        cin>>x;
        st.push(x);
        i++;
    }
    cout<<"The values are : ";
    i=0;
    while(i<n)
    {
        cout<<st.top()<<" ";
        st.pop();
        i++;
    }
}