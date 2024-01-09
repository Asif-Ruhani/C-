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

    int mid,search_value;
    cout<<"Enter the search item : ";
    cin>>search_value;
    int count=0,beg=0,end=n-1;

    while(beg<=end)
 {
     mid=(beg+end)/2;
     if(arr[mid]==search_value)
     {
       for(i=mid;i<n-1;i++)
       {
            arr[i]=arr[i+1];
       }
       for(i=0;i<n-1;i++)
       {
        cout<<" "<<arr[i];
       }
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
for(i=n-1;i>=0;i--)
{
    cout<<" "<<arr[i];
}

}