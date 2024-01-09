#include<iostream>
using namespace std;

void copystr(char*,const char*);
int main()
{

    char* str1 = "Self conquest is the greatest victory";
    char str2[100];

    copystr(str2,str1);
    cout<<str2<<endl;

    return 0;
}
void copystr(char* dest,const char* src)
{
    while(*src!='\0')
    {
        *dest++ = *src++;
    }
    *dest = '\0';
}
