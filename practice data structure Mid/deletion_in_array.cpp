#include<iostream>
using namespace std;

int main()
{
    int i,pos,n;
    cout<<"Enter array of size ";
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the position ";
    cin>>pos;
    for(i=pos;i<n;i++)
    {
          arr[i]=arr[i+1];
    }
    for(i=0;i<n-1;i++)
    {
        cout<<arr[i]<<" ";
    }
}