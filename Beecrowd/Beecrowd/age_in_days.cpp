#include<bits/stdc++.h>
using namespace std;

int main()
{
    int age,r;
    cin>>age;
    cout<<age/365<<" ano(s)"<<endl;
    r=age%365;
    cout<<r/30<<" mes(es)"<<endl;
    r=r%30;
    cout<<r<<" dia(s)"<<endl;
    return 0;
}