#include<iostream>
using namespace std;

class student
{
    private:
    int x;
    public:
    student()
    {
        x=0;
    }
    student(int y)
    {
        x=y;
    }
    void getdata()
    {
        cout<<"Enter numbers to compare : ";
        cin>>x;
    }
    int operator<(student a)
    {
        if(x<a.x)
        {
            return 1;
        }
        else 
        {
            return 0;
        }
    }
};

int main()
{

student s1,s2;
s1.getdata();
s2.getdata();
if(s1<s2)
{
    cout<<"first value is smaller "<<endl;
}
else 
{
    cout<<"second value is smaller "<<endl;
}


    return 0;
}