#include<iostream>
#include<string>
using namespace std;

class student
{
private:
    int id;
    string name;
    double mark;

public:
    void get_data()
    {
        cout<<"Enter your ID :";
        cin>>id;
        cout<<"Enter your name :";
        cin.ignore();
        getline(cin,name);
        cout<<"Enter your mark :";
        cin>>mark;
    }

    void put_data()
    {
        cout<<"your name is :" << name << endl;
        cout<<"your ID is :" << id << endl;
        cout<<"your mark is :" << mark << endl;

    }

    int total_mark(student s1[])
    {
        int i,sum=0;
        for(i=0; i<3; i++)
        {
            sum=sum+s1[i].mark;
        }
        return sum;
    }
};


int main ()
{
    student s[3],s1;
    int i,t;

    for(i=0; i<3; i++)  // for input
    {
        s[i].get_data();
    }

     for(i=0; i<3; i++)  // for output
    {
        s[i].put_data();
    }

    //t=s1.total_mark(s);

    cout<<"Total marks of students :" << s1.total_mark(s) << endl;

    return 0;
}
