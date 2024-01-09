#include<bits/stdc++.h>
using namespace std;

class Distance  // class has been created
{
private:
    int feet;
    float inch;
public:
    Distance () //default constructor has been created
    {
        feet=0;
        inch=0.0;
    }
    Distance (int f, float i) //parameterized constructor has been created
    {
        feet=f;
        inch=i;
    }
    void getDist()  // A function has been created for get input
    {
        cout<<" Enter feet and inches:";
        cin>> feet>>inch;
    }


    /* void operator +=(Distance d)  // oprerator overloading(+=), it has no return type
       {
           feet = feet+ d.feet;
           inch = inch + d.inch;
           feet=feet + inch/12;
           inch=fmod(inch,12);   // fmod() has returned the reminder
       }*/
    Distance operator +=(Distance d) // oprerator overloading(+=), it has return type
    {


        feet=feet+d.feet;
        inch=inch+d.inch;
        feet=feet+inch/12;
        inch=fmod(inch,12);


        Distance temp;
         temp.feet=feet;
         temp.inch=inch;

        return temp;
    }
     void showDist()   // A function has been created for showing output
    {
        cout<<fixed<<setprecision(1)<<" "<<feet << " feet " <<inch << " inches "<<endl;
    }


};

int main ()   // Main function has been started
{
    Distance d1,d2,d3(5,90.0),d4(2,11.0);  // 4 objects have been created
   // d1.getDist();
    //d2.getDist();
    //d1+=d2;
    //d1.showDist();
   d3=d3+=d4;
    d3.showDist();

    return 0;
}


