#include<iostream>
using namespace std;

class Distance
{
private:
    int feet;
    float inches;
public:
    Distance()
    {
        feet = 0;
        inches = 0.0;
    }
    Distance(int f,float i)
    {
        feet = f;
        inches = i;
    }
    void show()
    {
        cout<<"feet: "<<feet<<" Inches: "<<inches<<endl;
    }
    friend Distance operator +(Distance d1,Distance d2);
    //Distance operator +(Distance d1);

};
Distance operator+(Distance d1,Distance d2)
{
    int i /*feet*/ = d1.feet+d2.feet;
    float f /*inches*/ = d1.inches+d2.inches;
    return Distance(f,i);
    /*Distance temp;
    temp.feet=feet;
    temp.inches=inches;
    return temp;*/
}
/*Distance Distance:: operator+(Distance d1)
{
    int f = feet+d1.feet;
    float i = inches+d1.inches;
    return Distance(f,i);
}*/
int main()
{
    Distance d1(4,3.5);
    Distance d2(4,3.5);

    Distance d3;

    d1.show();
    d2.show();
    d3 = d1+d2;
    d3.show();
    return 0;
}
