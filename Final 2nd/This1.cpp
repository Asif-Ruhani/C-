#include<iostream>
using namespace std;

class where
{
private:
    char ch[10];
public:
    void reveal()
    {
        cout<<"The objects's address is: "<<this<<endl;
    }
};
int main()
{
    where w1,w2,w3;
    w1.reveal();
    w2.reveal();
    w3.reveal();
    return 0;
}
