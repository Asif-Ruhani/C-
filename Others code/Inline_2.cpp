#include<iostream>
using namespace std;

class calculation
{
private:
    double x,y,sum,mul,div,sub;

public:
    float getvalue();
    double summation();
    double subtruction();
    void multiplication();
    void division();
    void show();
};

inline float calculation::getvalue()
{
   cout<< "Enter two fruction numbers : ";
   cin>> x >> y ;
}

 double calculation::summation() // since it has return data type and without inline

                                //for this no need to create a function for showing output
{
    sum = x+y;
   return sum;

}

inline double calculation::subtruction()   // since it has return data type and with inline
                                           //for this no need to create a function for showing output
{
    sub = x-y;
    return sub;

}

 void calculation::multiplication()  // since it is a void function and without inline
                                          // for this it need to a function for showing output
{
   mul = x*y;
}

inline void calculation::division()   // since it is a void function and with inline
                                      // for this it need to a function for showing output
{
   div = x/y;
}

inline void calculation::show()  // this function is created for showing output void type function
{
   cout<<" The multiplication of these two numbers is " << mul << endl;
   cout<<" The division of these two numbers is " << div << endl;
}


int main ()
{
   calculation c;
   c.getvalue();
   cout<<" The summation of these two numbers is " << c.summation() << endl;  // it has return data type
   cout<<" The subtruction of these two numbers is " << c.subtruction() << endl;  // it has return data tupe
   c.multiplication();    // it has not return data type, it is a void function
   c.division();   // it has not return data type, it is a void function
   c.show();      //  function declare for showing output for void type function


  return 0;
}
