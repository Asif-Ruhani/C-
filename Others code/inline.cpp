#include<iostream>
using namespace std;

class Square
{
private:
    int s;
public:
    Square()
    {
        s = 0;
    }
    int area(int a);
   /* {
        s = a;
        return s*s;
    }*/
};
inline int Square::area(int a)
{
    s = a;
    return s*s;
}
int main()
{
    Square s;
    int a;
    cout<< "Enter a integer number : ";
    cin>> a;
    cout<<s.area(a)<<endl;

}

