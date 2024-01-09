#include<bits/stdc++.h>
using namespace std;

int main()
{     
    double A,B,C,pi=3.14159;
    cin>>A>>B>>C;
    cout<<fixed <<setprecision(3)<<"TRIANGULO: "<<0.5*A*C<<endl;
    cout<<fixed <<setprecision(3)<<"CIRCULO: "<<pi*C*C<<endl;
    cout<<fixed <<setprecision(3)<<"TRAPEZIO: "<<0.5*C*(A+B)<<endl;
    cout<<fixed <<setprecision(3)<<"QUADRADO: "<<B*B<<endl;
    cout<<fixed <<setprecision(3)<<"RETANGULO: "<<A*B<<endl;
 
    return 0;
}