#include<iostream>
#include<cmath>
using namespace std;

class shape  // parent class
{
public:
    int base,height,Area;

    void get_data(int b,int h)
    {
        base=b;
        height=h;

    }
};

class Rectange:public shape  // child class
{
public:
    void Rec_Area ()
    {
        Area = base*height;
        cout<<"Area of the ractange = "<< Area<<endl<<endl;
    }
};

class Triangle:public shape    // child class
{
public:
    void Tri_Area ()
    {
        Area = 0.5*base*height;
        cout<<"Area of the triangle = "<< Area<<endl<<endl;
    }

};

class Square:public shape    // child class
{
public:
    void Sq_Area ()
    {
        Area = base*base;
        cout<<"Area of the square = "<< Area<<endl<<endl;
    }
};

int main ()
{
    int base,height;
    cout<<"Enter base and height : ";
        cin>>base>>height;
    shape s;
    s.get_data(base,height);
    Rectange r;
    r.get_data(base,height);
    r.Rec_Area();
    Triangle t;
    t.get_data(base,height);
    t.Tri_Area();
    Square sq;
    sq.get_data(base,height);
    sq.Sq_Area();

   return 0;
}
