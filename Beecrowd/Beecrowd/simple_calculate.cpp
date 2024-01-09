#include<bits/stdc++.h>
using namespace std;

int main()
{
    int A,B;
    float C,SUM;
    cin>>A>>B>>C;
    SUM=B*C;
    cin>>A>>B>>C;
    SUM=SUM+B*C;
   cout<<fixed <<setprecision(2)<<"VALOR A PAGAR: R$ "<<SUM<<endl;
   return 0;
}