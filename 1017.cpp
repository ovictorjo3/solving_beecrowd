#include<bits/stdc++.h>
using namespace std;

int main()
{
    cout<<fixed<<setprecision(3);

    int tempo=0, vm=0;
    double litros = 0;

    cin>>tempo>>vm;

    litros = ((tempo * vm) / (12.0));

    cout<<litros<<endl;
    return 0;
}