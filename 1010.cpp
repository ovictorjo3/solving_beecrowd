#include<bits/stdc++.h>
using namespace std;

int main()
{
    cout<<fixed<<setprecision(2);
    
    int cod1,qtd1,cod2,qtd2;
    double p1=0,p2=0, total=0;

    cin>>cod1>>qtd1>>p1;
    cin>>cod2>>qtd2>>p2;

    total = qtd1*p1 + qtd2*p2;

    cout<<"VALOR A PAGAR: R$ "<<total<<endl;

    return 0;
}