#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,arr[20];
    cout<<"Enter n : ";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);

    int item,beg=0,end=n-1,mid,flag=0,index;
    cout<<"Enter item ";
    cin>>item;
    while(beg<=end)
    {
        mid=(beg+end)/2;
        if(item==arr[mid])
        {
            flag=1;
            index=mid;
        }
       if(item<arr[mid])
        end=mid-1;
        else 
        beg=mid+1;
    }
    if(flag==1)
    cout<<"The item is found in "<<index <<" index "<<endl;
    else 
    cout<<"The file is not found "<<endl;
}