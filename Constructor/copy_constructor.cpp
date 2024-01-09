#include<iostream>
using namespace std;

class student
{
private:
    int roll;
    double paid;

public:
    student(int r,int p)
    {

        roll=r;
        paid=p;
    }
    student(student &s)
    {

        roll=s.roll;
        paid = s.paid;
       // cout<<roll << endl << paid;

    }

    void display()
    {
        cout<<"Roll is = "<< roll << endl;
        cout<< "Total ammount paid ="<< paid << endl;
        cout<< "constructor is on" << endl;
        cout<<"Destructor is invoked when it is called"<<endl;
        cout<<"it has to invoked for both constructor & destructor"<<endl;
             
    }

};

int main ()
{
    student st(112,4500);
    st.display();
    student s(st); 
    
    return 0;
}
