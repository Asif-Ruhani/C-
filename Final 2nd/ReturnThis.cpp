#include<iostream>
using namespace std;

class Something
{
private:
    int data;
public:
    Something()
    {
        this->data=0;
    }
    Something(int data)
    {
        this->data=data;
    }
    void display()
    {
        cout<<data<<endl;
    }
    Something operator = (Something a)
    {
        data=a.data;
        cout<<"Assignment Operator invoked"<<endl;
        //return Something(data);
        return *this;
    }
};
int main()
{
    Something a1=37;
    Something a2,a3;
    a3=a2=a1;
    cout<<"a2: ";
    a2.display();
    cout<<"a3: ";
    a3.display();
    return 0;
}
