#include<iostream>
using namespace std;

class asif
{
    private:
    int x,y;
    public:
        asif()
        {
            x=7;
            y=6;
        }
        friend class akhlas;
};
class akhlas
{
    public:
        int sum(asif as)
        {
            cout<<"The sum is "<< as.x+as.y<<endl;
        }
       
};
       


int main()
    {
        asif as;
        akhlas ak;
        ak.sum(as);

        return 0;
    }