#include<iostream>
using namespace std;

int main ()
{
    //condition? statement1:statement2;
    //if condition is true , statement 1 will print or true
    //if condition is false , statement 2 will print or true


    int a,b,large,small,x;
    cout<<"Enter two numbers :";
    cin>> a >> b;
    large = a>b? a:b; // it is like if condition
    cout<<"The large number is = " << large <<"\n\n";

    cout<<"Enter the number for check if the number is even or odd :";
    cin>> x;
    (x%2==0)? cout<<"The number is even\n" : cout<<"The number is odd\n";

    // Small number test

   /* cin>> a >> b;
    small = a<b? a:b;
    cout<<"The small number is = " << small <<"\n\n";

     cout<<"Enter the number for check if the number is even or odd :";
    cin>> x;
    (x%2==0)? cout<<"The number is even\n" : cout<<"The number is odd\n";*/


    return 0;
}
