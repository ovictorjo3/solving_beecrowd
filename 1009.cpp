#include<bits/stdc++.h>
using namespace std;

int main()
{
    cout<<fixed<<setprecision(2);

    char nome[50];
    double salario=0,fat_vendas = 0, total=0;

    cin>>nome;
    cin>>salario>>fat_vendas;

    total = salario + (0.15)*fat_vendas;

    cout<<"TOTAL = R$ "<<total<<endl; 

    return 0;
}