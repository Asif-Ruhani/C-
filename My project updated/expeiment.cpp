#include<iostream>
#include <fstream>
using namespace std;

int main()
{
    string s,st;
    ifstream file("Brands.txt");
    while(getline(file,st))
    {
        cout<<st<<endl;
    }
    file.close();


    cout<<"select option"<<endl;
    state:
    cin>>s;
    ifstream file1(s+".txt");
    while(getline(file1,st))
    {
        if(st=="i2")
        {
            cout<<st<<endl;
            while(getline(file1,st))
            {
                if(st=="#") break;
                else
                cout<<st<<endl;
            }
        }
    }
    file.close();
    goto state;
}


 string s,st;
    ifstream file("Brands.txt");
    while(getline(file,st))
    {
        cout<<st<<endl;
    }
    file.close();




    cout<<"select option"<<endl;
    state:
    cin>>s;
    ifstream file1("iphone/asif/"+s+".txt");
    while(getline(file1,st))
    {
        cout<<st<<endl;
    }
    file.close();
    goto state;
