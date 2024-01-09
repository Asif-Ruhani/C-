#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[20];
    int i,n;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]=='+')
        {
            arr[i-2]=arr[i-1]+arr[i-2];
        }
        if(arr[i]=='-')
        {
            arr[i-2]=arr[i-1]-arr[i-2];
        }
        if(arr[i]=='*')
        {
            arr[i-2]=arr[i-1]*arr[i-2];
        }
        if(arr[i]=='/')
        {
            arr[i-2]=arr[i-1]/arr[i-2];
        }
    }
    for(i=0;i<1;i++)
    {
        cout<<arr[i]<<" ";
    }
}