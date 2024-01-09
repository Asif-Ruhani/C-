#include<iostream>
using namespace std;

class Rectangle
{
    int length;
    int height;
    int width;
public:
    Rectangle()  //Default
    {
        cout<<"Default Constructor invoked"<<endl;
        length = 0;
        height = 0;
        width = 0;
        cout<<length<<" "<<height<<" "<<width<<endl;
    }
    Rectangle(int l,int h,int w) //Parameterized
    {
        cout<<"Parameterized Constructor invoked"<<endl;
        length = l;
        height = h;
        width = w;
        cout<<length<<" "<<height<<" "<<width<<endl;
    }
    Rectangle(const Rectangle &rec) //copy constructor
    {
        cout<<"Copy Constructor invoked"<<endl;
        length = rec.length;
        height = rec.height;
        width = rec.width;
        cout<<length<<" "<<height<<" "<<width<<endl;
    }
    ~Rectangle()
    {
        cout<<"Destructor invoked"<<endl;
    }
};

int main()
{
    Rectangle r1;
    Rectangle r2(10,20,30);
    Rectangle r3(r2);
    Rectangle r4 = r1;
   // r3=r1;
    return 0;
}
