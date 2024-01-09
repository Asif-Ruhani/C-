#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j,arr[20],temp;
    cout<<"Enter n ";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }

   /* for(i=0;i<n-1;i++)
    {
        
        for(j=0;j<n-1;j++)
        {  
            if(arr[j+1]<arr[j])
            {
                temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
            else 
               arr[j]=arr[j];
              
        }
    }*/
     i=0;
    while(i<n-1)
    {   
       j=i;
       while(j<n-1)
       {
        
            if(arr[j+1]<arr[j])
            {
                temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
            else 
               arr[j]=arr[j];
               j++;
              
       }
        i++;
    }
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}