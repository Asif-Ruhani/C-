#include<iostream>
using namespace std;

class Rectangle
{
    int length;
    double height;
    int width;
public:
    Rectangle()
    {
        cout<<"Default constructor invoked"<<endl;  // default constructor is created
        length = 0;
        height = 0;
        cout<<length<<" "<<height<<endl;
    }
    Rectangle(int len, int hei)     // 2 same data type parameterized constructor is created
    {
        cout<<"Parameterized (length,height) invoked"<<endl;
        length = len;
        height = hei;
        cout<<length<<" "<<height<<endl;
    }
     Rectangle(int len, double hei)  // 2 different data type parameterized constructor is created
    {
        cout<<"Parameterized (length, double height) invoked"<<endl;
        length = len;
        height = hei;
        cout<<length<<" "<<height<<endl;
    }
    Rectangle(int l,int h,int p)  // 3 same data type parameterized constructor is created
    {
        cout<<"Parameterized (length,height,width) invoked"<<endl;
        length = l;
        height = h;
        width = p;
        cout<<length<<" "<<height<<" "<<width<<endl;
    }

};
int main()
{
    Rectangle r1;  // default constructor called

    Rectangle r2(8,9,10);  // 3 same data type parameterized constructor is called

    Rectangle r3(10,2);  // 2 same data type parameterized constructor is called

    Rectangle r4(2,3.4);  // 2 different data type parameterized constructor is called

    return 0;
}
