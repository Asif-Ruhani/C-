#include<iostream>
#include<cstring>
using namespace std;

class String
{
private:
    char* str;
public:
    String()
    {
        str='\0';
    }
    String(char* s)
    {
        int length = strlen(s);
        str = new char[length];
        strcpy(str,s);
    }
    ~String()
    {
        cout<<"Deleting str"<<endl;
        delete[] str;
    }
    void display()
    {
        cout<<str<<endl;
    }
};
int main()
{
    String s1("Who knows nothing doubts nothing"),s2;
    s1.display();
    return 0;
}
