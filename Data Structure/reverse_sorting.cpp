#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,arr[50];
    cout<<"Total digit : ";
    cin>>n;
    /*cout<<"Input the values : "<<endl;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n,greater<int>());

    cout<<"After descending sort"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

    // using while loop
    cout<<"Input the values : "<<endl;
    i=0;
    while(i<n)
    {
        cin>>arr[i];
        i++;
    }
    sort(arr,arr+n,greater<int>());
    cout<<"After descending sort"<<endl;
    
    i=0;
    while(i<n)
    {
        cout<<arr[i]<<" ";
        i++;
    }*/

    //using do while loop
    cout<<"Input the values : "<<endl;
    i=0;
    do
    {
        cin>>arr[i];
        i++;
    }
   while(i<n);
   sort(arr,arr+n,greater<int>());
  cout<<"After descending sort"<<endl;
  i=0;
    do
    {
        cout<<arr[i]<<" ";
        i++;
    }
    while(i<n);

}