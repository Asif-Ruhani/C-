#include<iostream>
using namespace std;

class Counter
{
protected:
    int Count;
public:
    Counter()
    {
        Count=0;
    }
    Counter(int c)
    {
        Count = c;
    }
    int get_count()
    {
        return Count;
    }
    void operator + (Counter a)
    {
        Count = Count+a.Count;
    }
};
class CountDn : public Counter
{
public:

    CountDn()
    {
        Count = 0;
    }
    CountDn(int c)
    {
        Count = c;
    }
    /*void operator + (Counter a)
    {
        Count = Count+a.Count;
    }*/
};
int main()
{
    CountDn c1(10);
    CountDn c2(5);

    c1+c2;
    cout<<c1.get_count()<<endl;

    return 0;

}
