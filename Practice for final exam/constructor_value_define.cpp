#include<iostream>
using namespace std;

class student
{
    private:
    int x,y;
    public:
    student(): x(112),y(113) {}
   
    void show()
    {
    cout<< x<<endl;
    cout<< y<<endl;
    }
};

int main()
{
    student* st;
    st = new student();
    st->show();

    /*student st;
    st.show();*/
}