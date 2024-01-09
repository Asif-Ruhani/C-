#include<iostream>
using namespace std;

class OpOverload  // class has been created
{
private:
    int var1,var2;
public:
    OpOverload ()  //default constructor has been created
    {
        var1=0;
        var2=0;
    }

    OpOverload ( int var11, int var22, int var33)  // parameterized constructor
    {
        var1=var11 + var22 + var33;
        var2=var11 + var22 + var33;
    }

    void operator ++ ()  // for increment (prefix)
    {
        ++var1;
        ++var2;
    }
    void operator ++ (int)   // for increment (postfix)
    {
        var1++;
        var2++;
    }
    void operator -- ()    // for decrement (prefix)
    {
        --var1;
        --var2;
    }
    void operator -- (int)   // for decrement (postfix)
    {
        var1--;
        var2--;
    }
    void show_present_value() // A function has been created for showing present value
    {
        cout<<var1<<endl;
        cout<<var2<<endl;
    }
};

int main ()    // Main function has been created
{
    OpOverload obj(1,1,2);   // An object has been created [ ID = 112 ]
    obj.show_present_value();
    cout<< "  After increment the  value of variables are : "<<endl;
    obj++;
   obj.show_present_value();
   cout<< "  After increment the  value of variables are : "<<endl;;
    ++obj;
    obj.show_present_value();
     cout<< "  After decrement the  value of variables are : "<<endl;
    obj--;
   obj.show_present_value();
    cout<< "  After decrement the  value of variables are : "<<endl;
    --obj;
    obj.show_present_value();

    return 0;
}

