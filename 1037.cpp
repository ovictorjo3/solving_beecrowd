#include<bits/stdc++.h>
using namespace std;

int main()
{
    double num;

    cin>>num;

    if(num>100 || num<0) cout<<"Fora de intervalo"<<endl;
    else if(num>=0 && num<=25) cout<<"Intervalo [0,25]"<<endl;
    else if(num>25 && num<=50) cout<<"Intervalo (25,50]"<<endl;
    else if(num>50 && num<=75) cout<<"Intervalo (50,75]"<<endl;
    else cout<<"Intervalo (75,100]"<<endl;

    return 0;
}