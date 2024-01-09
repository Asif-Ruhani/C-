#include<iostream>
using namespace std;

int main()
{
    int var1=11;
    int var2=22;
    int var3=33;
    cout<<&var1<<endl;
    cout<<&var2<<endl;
    cout<<&var3<<endl;

    int *ptr;
    ptr = &var1;
    cout<<ptr<<endl;
    cout<<*ptr<<endl; //accessing the value pointed to
    ptr=&var2;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;

    return 0;

}
