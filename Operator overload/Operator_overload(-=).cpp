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
    void getdata()
    {
        cout<<"Enter numbers to compare : ";
        cin>>x;
    }
    int operator-=(student a)
    {
       x=x-a.x;
    }
    void show()
    {
        cout<<"The value of x is "<<x<<endl;
    }
};

int main()
{

student s1,s2;
s1.getdata();
s2.getdata();

s1-=s2;
s1.show();

    return 0;
}