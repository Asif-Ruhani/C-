#include<bits/stdc++.h>
using namespace std;

class parent_1
{
protected:
    string name;
    int id;
public:
    void get_data()
    {
        cout<<"Enter your name : ";
        //cin.ignore();
        getline(cin,name);
        cout<<"Enter your ID : ";
        cin>>id;
    }
    void show()
    {
        cout<<"Your name is :  "<<name<<endl;
        cout<<"Your ID is :  "<<id<<endl;
    }
};
class parent_2
{
protected:
    int intake;
    double pay;
public:
    void get_data()
    {
        cout<<"Enter your Intake : ";
        cin>>intake;
        cout<<"Enter your Paid payment : ";
        cin>>pay;
    }
    void show()
    {
        cout<<"Your Intake is :  "<<intake<<endl;
        cout<<"Your Paid payment is :  "<<pay<<endl;
    }

};
class child:public parent_1,public parent_2
{
protected:
    double due;
public:
    void get_data()
    {
        parent_1::get_data();
        parent_2::get_data();
        cout<<"Enter your Due payment : ";
        cin>>due;
    }
    void show()
    {
        cout<<endl<<endl;
        parent_1::show();
        parent_2::show();
        cout<<"Your Due payment is :  "<<due<<endl;
    }

};

int main ()
{
    child c;
    c.get_data();
    c.show();

   return 0;
}
