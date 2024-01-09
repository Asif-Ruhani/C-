#include<iostream>
using namespace std;

class Rectangle
{
    int length;
    int height;
    int width;
public:
    Rectangle()
    {
        cout<<"Constructor invoked"<<endl;
        length = 0;
        height = 0;
        width = 0;
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
    return 0;
}
