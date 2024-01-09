#include<iostream>
using namespace std;

struct people
{
    int id;
    char name;
    float p;
    double d;
};
union People
{
    int id;
    char name;
    float p;
    double d;
};
int main()
{
    people p1;
    int s = sizeof(p1);
    cout<<"Size of Structure: "<<s<<endl;
    People p2;
    int S = sizeof(p2);
    cout<<"Size of Union: "<<S<<endl;
    return 0;
}
