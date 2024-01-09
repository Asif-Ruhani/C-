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
    int operator==(student a)
    {
        if(x==a.x)
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
if(s1==s2)
{
    cout<<"The value is same "<<endl;
}
else 
{
    cout<<"The value is not same "<<endl;
}


    return 0;
}