#include<iostream>
using namespace std;

int main ()
{
    char x;
    cout<<"Enter any chcracter :";
    cin>> x;
    x = tolower(x); // The inputted character will be small letter

    if(x=='a' || x=='e' || x=='i' || x=='o' || x=='u')
    {
        cout<<"The chcracter is vowel \n";
    }
    else
    {
       cout<<"The chcracter is consonant \n";
    }

    //  Another test

   /* char x;
    cout<<"Enter any chcracter :";
    cin>> x;
    x = toupper(x); // The inputted character will be capital letter

    if(x=='A' || x=='E' || x=='I' || x=='O' || x=='U')
    {
        cout<<"The chcracter is vowel \n";
    }
    else
    {
       cout<<"The chcracter is consonant \n";
    }*/




    return 0;
}
