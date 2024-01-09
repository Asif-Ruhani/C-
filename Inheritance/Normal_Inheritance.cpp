#include<iostream>
using namespace std;

class person
{
public:
    void display()
    {
        cout<<" I am a person " << endl;
    }
};
class student:public person
{

};

class teacher:public person
{

};


int main ()
{
    person p;
    p.display();
    student s;
    s.display();
    teacher t;
    t.display();



    return 0;
}
