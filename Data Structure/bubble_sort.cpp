#include<iostream>
using namespace std;

int main()
{
    int n,i,j,arr[50],temp;
    cout<<"ENTER N : ";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(i=0;i<n-1;i++)
    {
        
        for(j=0;j<n-1;j++)
       {
             if(arr[j+1]<arr[j])
              {
                 temp=arr[j];
                 arr[j]=arr[j+1];
                 arr[j+1]=temp;
              }
            else 
             {
                 arr[j]=arr[j];
             }
       }
        
    }
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}