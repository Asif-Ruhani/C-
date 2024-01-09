#include<iostream>
using namespace std;

int main()
{
    int i,pos,item,n;
    cout<<"Enter array of size ";
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the item ";
    cin>>item;
    cout<<"Enter the position ";
    cin>>pos;
    for(i=n;i>=pos;i--)
    {
        if(i==pos)
        {
            arr[i]=item;
            break;
        }
        else 
        {
            arr[i]=arr[i-1];
        }
    }

    for(i=0;i<=n;i++)
    {
        cout<<arr[i]<<" ";
    }
}