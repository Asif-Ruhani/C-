#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[100],i,n;
    cout<<"Total numbers : ";
    cin>>n;
    cout<<"Enter the numbers : ";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

    int mid,search_value;
    cout<<"Enter the value : ";
    cin>>search_value;
    int count=0,beg=0,end=n-1;

    while(beg<=end)
 {
     mid=(beg+end)/2;
     if(arr[mid]==search_value)
     {
        cout<<"The value is found "<<endl;
        cout<<"The index of the value is "<<mid<<endl;
        return 0;
     }
       if(search_value>arr[mid])
     {
        beg=mid+1;
     }
     else
     {
        end=mid-1;
     }
 }
 cout<<"Items does not found "<<endl;

 /*if(count==1)
 {
    cout<<"The value is found "<<endl;
 }
 else 
 {
    cout<<"The value is not found"<<endl;
 }*/ 
 
}