#include<bits/stdc++.h>
using namespace std;

int main()
{
    cout<<fixed<<setprecision(3);

    double a=0,b=0,c=0,tri=0,circ=0,trap=0,qua=0,retan=0;

    cin>>a>>b>>c;

    tri = (a*c)/2;
    circ = (3.14159) * pow(c,2);
    trap = ((a+b)*c)/2;
    qua = pow(b,2);
    retan = a*b;

    cout<<"TRIANGULO: "<<tri<<endl;
    cout<<"CIRCULO: "<<circ<<endl;
    cout<<"TRAPEZIO: "<<trap<<endl;
    cout<<"QUADRADO: "<<qua<<endl;
    cout<<"RETANGULO: "<<retan<<endl;
    return 0;
}