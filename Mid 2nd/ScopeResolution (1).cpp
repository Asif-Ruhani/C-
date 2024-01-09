#include<iostream>
using namespace std;

//Scope resolution operator
class People
{
   int id;
public:
    People();
    void show();
};
//int People::id = 0;
People::People()
{
    id = 0;
}
void People::show()
{
    cout<<"Id: "<<id<<endl;
}
int main()
{
    People p1;
    p1.show();
    return 0;
}
