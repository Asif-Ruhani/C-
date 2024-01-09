#include<iostream>
using namespace std;

int main ()
{
    int A[3][3],B[3][3],S[3][3];

    //getting input for 1st matrix
    cout<< "Enter the value of first matrix :  ";

    for(int i=0; i<3; ++i)
    {
        for(int j=0; j<3; ++j)
        {
          cin>> A[i][j];
        }
    }
     //getting output for 1st matrix

     cout<< endl << endl;
     cout<< "A = ";

    for(int i=0; i<3; ++i)
    {
        for(int j=0; j<3; ++j)
        {
          cout<<" " << A[i][j];
        }
        cout<< endl;
        cout<< "    ";
    }
    cout<< endl << endl;

    //getting input for 2nd matrix
    cout<< "Enter the value of first matrix :  ";

    for(int i=0; i<3; ++i)
    {
        for(int j=0; j<3; ++j)
        {
          cin>> B[i][j];
        }
    }
     //getting output for 2nd matrix

     cout<< endl << endl;
     cout<< "B = ";

    for(int i=0; i<3; ++i)
    {
        for(int j=0; j<3; ++j)
        {
          cout<< " " << B[i][j];
        }
        cout<< endl;
        cout<< "    ";
    }
    cout<< endl << endl;

    //getting sum

    for(int i=0; i<3; ++i)
    {
        for(int j=0; j<3; ++j)
        {
          S[i][j] = A[i][j] + B[i][j];
        }
    }

    // Getting output for sum

     cout<< endl << endl;
     cout<< "A + B = ";

    for(int i=0; i<3; ++i)
    {
        for(int j=0; j<3; ++j)
        {
          cout<<" " << S[i][j];
        }
        cout<< endl;
        cout<< "        ";
    }



    return 0;
}
