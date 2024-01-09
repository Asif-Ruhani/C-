#include<iostream>
using namespace std;

class sum
{
private:
    int value;
public:
    sum()
    {
        value=0;
    }
    sum(int s)
    {
        value=s;
    }
    void add(sum s)
    {
        value=value+s.value;
    }
    void add(sum a, sum b)
    {
        value=value+a.value+b.value;
    }
    void display()
    {
        cout<< "The summation is " << " " << value << endl;
    }

};

int main ()
{
    sum s1(20);
    sum s2(15);
    sum s3;
    s3.add(s1,s2);
    s3.display();



    return 0;
}
