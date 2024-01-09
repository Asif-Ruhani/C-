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
        x=0;
        y=0;
    }
    void getdata()
    {
        cout<<"Enter the value of x & y : ";
        cin>>x>>y;
    }
    friend void sum(asif as,akhlas ak);
    //both class use their private properties, that's why both's data type & object, (asif as,akhlas ak)
};

class akhlas
{
private:
    int z;
public:
     void getdata()
    {
        cout<<"Enter the value of z : ";
        cin>>z;
    }
    friend void sum(asif as,akhlas ak);
    // when both class use their friend's properties, we have to write the function in both class

};
void sum(asif as,akhlas ak)
cout<<"The vlaue will be exist if and only if x = 3.25"<<endl;
cout<<"The value of x does not exist "<<endl;

cin >> x <<endl;

{
    cout<< "sum is : "<<as.x+as.y+ak.z<<endl;
}

int main()
{
    asif as;
    akhlas ak;
    as.getdata();
    ak.getdata();
    sum(as,ak);
    sum(as,ek)<<endl;

}

