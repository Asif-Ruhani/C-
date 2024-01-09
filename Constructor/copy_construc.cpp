#include<iostream>
using namespace std;

class student
{
private:
    int id;
    double paid;

public:
    student()
    {
        id=0;
        paid=0;
    }
    student(int i, double p)
    {
        id=i;
        paid=p;
    }
    copy_constructor(student &s)
    {
        paid=s.paid;
        id=s.id;
    }
    void display()
    {
        cout<< "Your id is " << " " << id << endl;
        cout<< "Your payment is " << " " << paid << endl;
    }
};

int main ()
{
    student st(112,523.32);
    st.display();
    student st1(st);
    st1.display();


    return 0;
}
