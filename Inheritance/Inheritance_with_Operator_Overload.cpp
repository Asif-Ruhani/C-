#include<iostream>
using namespace std;

class parent
{
protected:
    int protect;
public:
    parent()
    {
        protect=0;
    }
    parent(int p)
    {
        protect=p;
    }
    /*int get_protect()
    {
        return protect;
        this is the time passing code I have done 
        now i am watching movie because time does not spend 
    }*/
     void operator ++()
     {
         ++protect;
     }
     void operator--(int)
    {
        protect--;
    }
    void show()
    {
        cout<<"Ans is "<<protect<<endl;
    }
};
class child:public parent
{
public:
    using parent::operator++;
    using parent::operator--;
    child()
    {
        protect=0;
    }
    child(int p)
    {
        protect = p;
    }
     void operator ++(int)
    {

        protect++;
    }
     void operator --()
     {
         --protect;
     }
};

int main ()
{
    child c1,c2(5);

    c2.show();
    ++c2;
    c2.show();
    --c2;
    c2.show();

    c2--;
    c2.show();
    c2++;
    c2.show();

    return 0;
}
