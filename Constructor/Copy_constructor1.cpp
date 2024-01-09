#include<iostream>
using namespace std;

class Rectangle
{
    int length;
    int height;
    int width;
public:
    Rectangle() //default constructor
    {
        length = 5;
        height = 6;
        width = 7;
        cout<<length<<" "<<height<<" "<<width<<endl;
    }
    Rectangle( Rectangle &rec)  //copy constructor 1 parameterized
    {
        length = rec.length;   // what is the difference between (const rectangle &rec ) and (rectangle &rec)
        height = rec.height;
        width = rec.width;
        cout<<(length+1)<<" "<<(height-2)<<" "<<width<<endl;
    }

    Rectangle( const Rectangle &rec1, Rectangle &rec2) //copy constructor 2 parameterized
    {
        length = rec1.length;
        height = rec1.height;
        width = rec1.width;
        cout<<(length+2)<<" "<<(height-3)<<" "<<width<<endl;
         length = rec2.length;
        height = rec2.height;
        width = rec2.width;
         cout<<(length+3)<<" "<<(height-1)<<" "<<width+5<<endl;
    }
};
int main()
{
    Rectangle r1;  // default constructor called
    Rectangle r2(r1);  // 1 parameterized constructor called
    Rectangle r3(r1,r2); // 2 parameterized constructor called

    return 0;
}
