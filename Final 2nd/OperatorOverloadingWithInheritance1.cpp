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
    void operator ++ ()
    {
        ++Count;
    }
};
class CountDn : public Counter
{
public:
     using Counter::operator++;
    CountDn()
    {
        Count = 0;
    }
    CountDn(int c)
    {
        Count = c;
    }
    void operator ++ (int)
    {
        Count++;
    }
};
int main()
{
    CountDn c1;
    CountDn c2(100);
    cout<<c1.get_count()<<endl;
    cout<<c2.get_count()<<endl;

    ++c1;
    cout<<c1.get_count()<<endl;
    c2++;
    cout<<c2.get_count()<<endl;
    return 0;

}
