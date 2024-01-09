#include<bits/stdc++.h>
using namespace std;

class person
{
protected:
    char name[30];
public:
    person()
    {
        name[0]='\0';
    }
    void getname()
    {
       cout<<"Enter name : ";
       cin.ignore();
       gets(name);
    }
    void putname()
    {
        cout<<"The name is "<<name<<endl;
    }

    virtual void getdata()=0;

    virtual bool outstanding()=0;

};
class student:public person
{
 protected:
     float cgpa;
 public:

    void getdata()
    {  person:getname();
       cout<<"Enter CGPA : ";
       cin>>cgpa;
    }
    bool outstanding()
    {
        if(cgpa>=3.5)
        {
            return true;
        }
        else
            return false;
    }
};
class professor:public person
{  protected:
     int numberofpublication;
 public:
    void getdata()
    {
       person:getname();
       cout<<"Enter number of publication : ";
       cin>>numberofpublication;
    }
    bool outstanding()
    {
          if(numberofpublication>=100)
        {
            return true;
        }
        else
            return false;
    }
};

void result(bool x)
{
    if(x==1)
    {
        cout<<"Outstanding "<<endl;
    }
    else 
    {
        cout<<"Not Outstanding "<<endl;
    }
}

int main ()
{
   person* p[2];


   for(int i=0;i<2;i++)
   {
       if(i==0)
          {   p[i]= new student;
              p[i]->getdata();
              result(p[i]->outstanding());
          }


       if(i==1)
       {
           p[i]= new professor;
           p[i]->getdata();
           result(p[i]->outstanding());
       }
   }


   return 0;

}