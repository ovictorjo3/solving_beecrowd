#include<bits/stdc++.h>
using namespace std;

int main()
{
    int segundos=0, horas=0, minutos=0;

    cin>>segundos;

    horas = segundos/3600;
    segundos = segundos - (horas * 3600);

    minutos = segundos / 60;
    segundos = segundos - (minutos*60);

    cout<<horas<<":"<<minutos<<":"<<segundos<<endl;
    return 0;
}