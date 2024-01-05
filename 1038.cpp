#include<bits/stdc++.h>
using namespace std;

int main()
{
    cout<<fixed<<setprecision(2);

    int cod=0, qtd = 0;
    double total=0;

    cin>>cod>>qtd;

    if(cod == 1) cout<<"Total: R$ "<<(4.0)*qtd<<endl;
    else if(cod == 2) cout<<"Total: R$ "<<(4.5)*qtd<<endl;
    else if(cod == 3) cout<<"Total: R$ "<<(5.0)*qtd<<endl;
    else if(cod == 4) cout<<"Total: R$ "<<(2.0)*qtd<<endl;
    else if(cod == 5) cout<<"Total: R$ "<<(1.5)*qtd<<endl;

    return 0;
}