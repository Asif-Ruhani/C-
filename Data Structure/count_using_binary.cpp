#include<bits/stdc++.h>
using namespace std;

int lower_occurance(int arr[],int n, int x)
{
   int mid, beg=0,end=n-1,result=-1;
   while(beg<=end)
   {
    mid=(beg+end)/2;
    if(x==arr[mid])
    {
        result=mid;
        end=mid-1;
    }
    else if(x<arr[mid])
    end=mid-1;
    else 
    beg=mid+1;
   }
   return result;
}

   int upper_occurance(int arr[],int n,int x)
   {
    int mid,beg=0,end=n-1,result=-1;
   while(beg<=end)
   {
    mid=(beg+end)/2;
    if(x==arr[mid])
    {
        result=mid;
        beg=mid+1;
    }
    else if(x<arr[mid])
    end=mid-1;
    else 
    beg=mid+1;
   }
   return result;
   }

int main()
{
    int i,n,item,arr[50];
    cout<<"Enter n";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    cout<<"Search item ";
    cin>>item;
    int a=lower_occurance(arr, n, item);
    int b=upper_occurance(arr,n,item);
    int ans=(b-a+1);
    cout<<ans<<endl;
}