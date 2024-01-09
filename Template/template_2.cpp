#include<iostream>
using namespace std;

template <class student>

student swapping(student &s1, student &s2)
    {
        student st;
        st = s1;
        s1 = s2;
        s2 = st;
    }
int main()
    {
       int x=5,y=6;
       double z=6.2,w=3.5;
       cout<<"After swapping "<<endl;
       swapping(x,y);
       cout<< "x = "<< x << "\ny = "<< y <<endl;

       cout<<"After swapping "<<endl;
       swapping(z,w);
       cout<< "z = "<< z << "\nw = "<< w <<endl;


        return 0;
    }
