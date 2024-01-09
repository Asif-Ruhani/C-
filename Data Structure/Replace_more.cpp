#include<iostream>
using namespace std;

int main()
{
    int i,n,arr[100];
    cout<<"Enter the value of N : ";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
   
    int pos1,pos2,value[100];
    cout<<"Enter position range : ";
    cin>>pos1>>pos2;
    cout<<"Enter the values : ";
    for(i=pos1;i<=pos2;i++)
    {
           cin>>value[i];
    }
    n=n+pos2-pos1+1;
    for(i=n;i>n-(pos2-pos1+1);i--)
    {
        arr[i]=arr[i-pos2];
    }


}