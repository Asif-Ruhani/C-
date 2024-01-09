#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,r;
    cin>>t;
    cout<<t/3600<<":";
    r=t%3600;
    cout<<r/60<<":";
    r=r%60;
    cout<<r<<endl;
    return 0;
}