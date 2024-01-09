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
    sort(arr,arr+n,greater<int>());

    int mid,search_value;
    cout<<"Enter the value : ";
    cin>>search_value;
    int flag=0,beg=0,end=n-1;

    while(beg<=end)
 {
     mid=(beg+end)/2;
     if(arr[mid]==search_value)
     {
        flag=1;
        cout<<"index = "<<mid<<endl;
        break;
     }
       if(search_value>arr[mid])
     {
        end=mid-1;
     }
     else
     {
        beg=mid+1;
     }
 }

 if(flag==1)
 {
    cout<<"The value is found "<<endl;
 }
 else 
 {
    cout<<"The value is not found"<<endl;
 } 
 
}