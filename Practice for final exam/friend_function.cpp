#include<iostream>
using namespace std;

class akhlas;

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
        int sum(akhlas ak);
};
class akhlas
{
    private:
    int x,y;
    public:
      friend int asif::sum(akhlas ak);
       
};

int asif::sum(akhlas ak)
{
    cout<<"the sum is "<<ak.x+ak.y<<endl;
}
       


int main()
    {
    asif as;
    akhlas ak;
    as.sum(ak);
        return 0;
    }