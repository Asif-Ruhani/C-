#include<iostream>
using namespace std;

class parent
{
public:
    parent()
    {
        cout << "Perent constructor is called" << endl;
    }

};

class child_1 : public parent
{

public:
    child_1()
    {
       cout<<"child_1 constructor is called"<< endl;
    }
};

class child_2 : public parent
{

public:
    child_2()
    {
        cout<<"child_2 constructor is called"<< endl;
    }
};

class grandson : public child_1, public child_2
{
public:
    grandson()
    {
        cout<<"grandson constructor is called"<< endl;
    }
};

int main()
{
    grandson g;
    //When i use constructor,I will create an object and all constructor will be called automatically.
    // because constructors do not need to calling, it's automatically called when an object is created
}

