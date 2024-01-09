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
   
    int pos;
    cout<<"Enter position : ";
    cin>>pos;
    for(i=pos;i<n;i++)
    {
        arr[i]=arr[i+1];
        /*i=0
        arr[pos=i]=arr[pos+i+1]*/
    } 
    for(i=0;i<n-1;i++)
    {
        cout<<arr[i]<<" ";
    }
}