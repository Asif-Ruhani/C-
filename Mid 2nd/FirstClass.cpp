#include<iostream>
using namespace std;


class student
{
private:
    long int id;
    char name;
    double cgpa;
public:
    void setInput(long int a, char n, double c)
    {
        id = a;
        name = n;
        cgpa = c;
    }
    void getInput()
    {
        cout<<"Enter Id: ";
        cin>>id;
        cout<<"Enter name: ";
        cin>>name;
        cout<<"Enter cgpa: ";
        cin>>cgpa;
    }
    void display()
    {
        cout<<"Id: "<<id<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"CGPA: "<<cgpa<<endl;
    }

};

int main()
{
    student s1,s2;
    s1.setInput(1234,'a',3.92);
    s2.getInput();
    cout<<"Information of Student 1: "<<endl;
    s1.display();
    cout<<"Information of Student 2: "<<endl;
    s2.display();

    return 0;
}
