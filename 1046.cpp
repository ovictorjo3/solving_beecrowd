#include<bits/stdc++.h>
using namespace std;

int main()
{
    int inicio=0,fim=0,duracao=0,aux=0;;

    cin>>inicio>>fim;

    duracao = fim - inicio;

    if(duracao == 0) cout<<"O JOGO DUROU 24 HORA(S)"<<endl;
    else if(duracao > 0) cout<<"O JOGO DUROU "<<duracao<<" HORA(S)"<<endl;
    else
    {
        aux = 24 - inicio;
        duracao = aux + fim;
        cout<<"O JOGO DUROU "<<duracao<<" HORA(S)"<<endl;
    }
    return 0;
}