#include<iostream>
using namespace std;

class Person
{
public:
    Person()
    {
        cout << "Person constructor called" << endl;
    }
    void show();
};

class Faculty : public Person
{

public:
    Faculty()
    {
       cout<<"Faculty constructor called"<< endl;
    }
};

class Student : public Person
{

public:
    Student()
    {
        cout<<"Student constructor called"<< endl;
    }
};

class TA : public Faculty, public Student
{
public:
    TA()zd
    {
        cout<<"TA constructor called"<< endl;
    }
};

int main()
{
    TA ta1;
    //ta1.show();
}

