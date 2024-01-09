#include<iostream>
using namespace std;

int main()
{
    int i,n,arr[100];
    cout<<"Enter the value of N : ";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
   
    int pos,value;
    cout<<"Enter position : ";
    cin>>pos;
    cout<<"Enter the value : ";
    cin>>value;

     n=n+1;
    for(i=n;i>pos;i--)
    {
        arr[i]=arr[i-1];
        //arr[pos]=value;
    }
    arr[pos]=value;
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}