#include<iostream>
#include<string>
using namespace std;

class student
{
private:
    int id,sec;
    double paid;
    string name,inst,adrs;
public:
    student()
    {
        id=0;
        sec=0;
        paid=0;
        name='n';
        inst='i';
        adrs='a';
    }
    student(int i, int s,double p,string n,string inst)
    {
        id=i;
        sec=s;
        paid=p;
        name=n;
        inst=inst;
    }
    void getinput()
    {
        cout<< "Enter your name :";
        getline(cin,name);
        cout<< "Enter your institution name :";
        getline(cin,inst);
        cout<< "Enter your id and section :";
        cin >> id >> sec;
        cout<< "Enter your address :";
        cin.ignore();
        getline(cin,adrs);
        cout<< "Enter your payment :";
        cin>> paid;

    }
    void display()
    {
        cout<< name << endl;
        cout<< inst<< endl;
        cout<< id << "  " << sec << endl;
        cout<< paid << endl;
    }
};

int main ()
{

    student st;
    st.getinput();
    st.display();



    return 0;
}
