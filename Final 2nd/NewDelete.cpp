#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char* str = "Idle hands are the devil's workshop";
    int len = strlen(str);

    char* ptr;
    ptr = new char[len];
    strcpy(ptr,str);
    cout<<"Ptr = "<<ptr<<endl;

    delete[] ptr;
    return 0;
}
