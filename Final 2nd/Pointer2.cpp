#include<iostream>
using namespace std;

int main()
{
    int var1,var2;

    int *ptr;
    ptr =&var1; //set pointer to address of var1
    *ptr=37;  //same as var1=37
    var2=*ptr; //same as var2=var1

    cout<<var2<<endl;
}
