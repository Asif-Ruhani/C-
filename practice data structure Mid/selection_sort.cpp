#include<bits/stdc++.h>
using namespace std;

int main()
{
    int j,i,n,arr[100];
    cout<<"Enter N : ";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
   int min,temp;
    for(i=0;i<n-1;i++)
    {
      min=i;
      for(j=i+1;j<n;j++)
      {   
       
            if(arr[j]<arr[min])
            {
                min=j;
            }
      }
            if(min!=i)
            {
                swap(arr[i],arr[min]);
            }
    }
        
    
   /* i=0;
    while(i<n-1)
    {
         min=i;

         j=i+1;
         while(j<n)
         {
            if(arr[j]<arr[min])
            {
                min=j;
            }
            j++;
         }
         if(min!=i)
         {
            swap(arr[i],arr[min]);
         }
         i++;
    }*/
    cout<<"sorted values "<<endl;
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}