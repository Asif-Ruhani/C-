#include<iostream>
#include<string>
using namespace std;

class Student
{
private:
    int id;
    string name;
    int marks;
public:
    void getData()
    {
        cout<<"Enter Id: ";
        cin>>id;
        cout<<"Enter name: ";
        cin>>name;
        cout<<"Enter Marks: ";
        cin>>marks;
    }
    /*int total(Student s1[])
    {
        int i,sum = 0;
        for(i=0;i<3;i++)
        {
            sum = sum+s1[i].marks;
        }
        return sum;
    }*/
    void putData()
    {
        cout<<"Id: "<<id<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Marks: "<<marks<<endl;
    }
};
//int size =10;
int main()
{
    Student s[3],s1;
    int i,t;
    //s.getData();
    for(i=0;i<3;i++)
    {
      s[i].getData();
    }
    for(i=0;i<3;i++)
    {
      s[i].putData();
    }
    //t = s1.total(s);
    //cout<<"Total Marks: "<<t<<endl;
    return 0;

}

