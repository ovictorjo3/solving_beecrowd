#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num=0,ano=0,mes=0,dia=0, aux=0;

    cin>>num;

    ano = num/365;
    cout<<ano<<" ano(s)"<<endl;
    aux = num%365;

    mes = aux/30;
    cout<<mes<<" mes(es)"<<endl;
    aux = aux%30;

    dia = aux;
    cout<<dia<<" dia(s)"<<endl;
    return 0;
}