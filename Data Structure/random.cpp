#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,arr[50];
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);

    int item,mid,beg=0,end=n-1,res=0;
    cin>>item;
    while(beg<=end)
    {
        if(item==arr[mid])
        {
            res=mid;
            end=mid-1;
        }
        else if(item>arr[mid])
        {
            beg=mid+1;
        }
        else 
        end=mid-1;
    }
    cout<<res<<endl;
}