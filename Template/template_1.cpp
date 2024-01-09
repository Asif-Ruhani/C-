#include<iostream>
using namespace std;

template <class student>
student show(student st)
    {
       /* if(st>=0)
        {
            return st;
        }
        else 
        {
            return -st;
        }*/

        return(st<0)? -st:st; // this is same as if-else condition.
    };

int main ()
{
  int x,y,z,w;
  
  x=10;
  y=-15;
  z=3.5;
  w=-5.32;

  cout<<"The value od integer x is : "<<show(x)<<endl;
  cout<<"The value od integer y is : "<<show(y)<<endl;
  cout<<"The value od integer z is : "<<show(z)<<endl;
  cout<<"The value od integer w is : "<<show(w)<<endl;
  


    return 0;
}