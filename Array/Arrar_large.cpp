#include<bits/stdc++.h>
using namespace std;

class student
{
private:
    string name;
    int id;
    double cse,eee,mat;

public:
    void get_input()
    {
        cout<< "Name : ";
        cin.ignore();
        getline(cin,name);
        cout<< "ID : ";
        cin>> id;
        cout<<"    Marks : " << endl;
        cout<< "        CSE : ";
        cin>> cse ;
        cout<< "        EEE : ";
        cin>> eee;
        cout<< "        MAT : ";
        cin>> mat;
        cout<< endl << endl;
    }

    void show_output()
    {
        cout<< "Name : " << name << endl;
        cout<< "ID : " << id << endl;
        cout<< "    Marks" << endl;
        cout<< "        CSE : " << cse << endl;
        cout<< "        EEE : " << eee << endl;
        cout<< "        MAT : " << mat << endl;
    }
};


int main ()
{
    int i;
    student s[3];
    cout<< "Enter 1 No. student's details" << endl;

    for(i=0; i<3; i++)
    {
       s[i].get_input();
       if(i==2)
       {
           break;
       }
       cout<<"Enter " << (i+2) <<" No. student's details" << endl;
    }

     cout<< " 1 No. student's details" << endl;

    for(i=0; i<3; i++)
    {
       s[i].show_output();
       cout<< endl << endl;
       if(i==2)
       {
           break;
       }
       cout<< (i+2) <<" No. student's details" << endl;
    }



    return 0;
}
