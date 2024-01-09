#include<iostream>
#include<string>
using namespace std;

class student
{
private:
    string name;
    int id;
    double mark;

public:
    void get_input()
    {
        cout<<"Enter your name : ";
        cin.ignore();
        getline(cin,name);
        cout<<"Enter your id : ";
        cin>> id;
        cout<<"Enter your mark : ";
        cin>> mark;
    }

   void show_output()
    {
        cout<<"Your name is : " << name << endl;
        cout<< "Your id is : " << id  << endl;
        cout<<"Your mark is : " << mark << endl;

    }
};


int main ()
{
   student st[3];
   int i;
   for(i=0; i<3; i++)
   {
        st[i].get_input();
   }

    cout<< endl << endl ;

    for(i=0; i<3; i++)
   {
       st[i].show_output();
       cout<< endl << endl;
   }
   // this line is only for check if the changes show in github or not

return 0;
}
