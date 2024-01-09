#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int n;
    cout<< "How many number do you set in array : ";
    cin >> n;
    int arr[n];
    cout<< "Enter array numbers : ";
    for(int i=0; i<n; i++)
    {
        cin>> arr[i];
    }
    int x = sizeof(arr)/sizeof(arr[0]);
   //cout<< "The size of array is " << x << endl;

    sort(arr,arr+x);

   // cout<< "After sorting the array is ";

    for(int i=0; i<n; i++)
    {
        //cout<< arr[i] << " ";
        if(i==1)
        {
            cout<< "The height of 3rd largest hill is " << arr[i] << endl;
        }
    }


    return 0;
}

