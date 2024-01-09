#include<iostream>
#include<cstring>
using namespace std;

class student
{
    private:
    char* ptr;
    public:
    student()
    {
        ptr = new char[0];
    }
    student(char* ch)
    {
        int len=strlen(ch);
        ptr = new char[len];
        strcpy(ptr,ch);
    }
    void Toupper()
    {
       for(int i =0; *(ptr+i)!='\0';i++)
       {
           if(*(ptr+i)>=97 && *(ptr+i)<=122)
           {
            *(ptr+i) = *(ptr+i)-32;
           }
       }
    }
    void show()
    {
        cout<<ptr<<endl;
    }
   
    ~student()
    {
        delete[] ptr;
    }
     
};

int main()
{   
   student st1("i am asif RUHANI FROM BUBT");
    st1.show();
    st1.Toupper();
    st1.show();

    return 0;
}