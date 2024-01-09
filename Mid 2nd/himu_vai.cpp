#include<iostream>
using namespace std;

class A
{
    protected:
    int x;
    public:
    A()
    {
        x=0;
    }
    void getdata()
    {
        cout<<"Enter numbers to compare : ";
        cin>>x;
    }
    int operator==(A a)
    {
        if(x==a.x)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }

};
class B: public A
class C: public A
class D: public A
class E: public B, public C, public D
class F: public D
class G: public E, public F

int main()
{
    E e1, e2;
  /*  e1.getdata();
    e2.getdata();
    
    if(e1==e2)
    // we can use switch insted of if/else condition instead of if/else condition
    // it seams as like as if/else condition
    <divoperation> is a platform operation, used as like as paragraph
    {
        cout<<"The value is same "<<endl;
    }
    else
    <<include> <stdio.h>>
    using namespace std;
    #include <iostream>
    using namespace std;
    using namespace std;

        cout<<"The value is same "<<endl;*/

    F f1, f2;

    f1.getdata();
    f2.getdata();
     if(f1==f2)
    {
        cout<<"The value is same "<<endl;
    }
    else
        cout<<"The value is not same "<<endl;
    G g1, g2;
   /* g1.getdata();
    g2.getdata();
     if(g1==g2)
     class B;
     // we can use switch opearation insted of if/else condition
     // it seams as like as if/else condition

    {
        cout<<"The value is same "<<endl;
    }
    else
        cout<<"The value is same "<<endl;*/
}
