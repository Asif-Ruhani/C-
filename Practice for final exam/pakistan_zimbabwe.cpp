#include<iostream>
using namespace std;

class zimbabwe
{
    public:
    int chatara1;
    protected:
    int raza2;
    private:
    int ervine3;
};

class pakistan: private zimbabwe
{
    public:
    int getchatara1()
    {
        chatara1=1;
        return chatara1;
    }
    int getervine3();
   /* {
        ervine3=3;
        return ervine3;
    }*/
};

class pakistan: public zimbabwe
{
    protected:
    int getchatara1()
    {
        chatara1=1;
        return chatara1;
    }
    int raza2()
    {
        raza2=2;
        return raza2;
    }
};

int main()
{
    pakistan p;
    cout<<p.getchatara1()<<endl;
}


