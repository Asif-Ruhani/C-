#include<iostream>
using namespace std;

/*int Min(int a,int b)
{
    if(a<b)
        return a;
    else
        return b;
}
int main()
{
    int a = 4, b = 5,c;
    c = Min(a,b);
    cout<<"Minimum : "<<c<<endl;

    return 0;

}*/
class Square
{
private:
    int s;
public:
    Square()
    {
        s = 0;
    }
    inline int area(int a);
    /*{
        s = a;
        return s*s;
    }*/
};
int Square::area(int a)
{
    s = a;
    return s*s;
}
int main()
{
    Square s;
    cout<<s.area(10)<<endl;

}
