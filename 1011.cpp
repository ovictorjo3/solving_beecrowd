#include<bits/stdc++.h>
using namespace std;

int main()
{
    cout<<fixed<<setprecision(3);

    double const_pi=3.14159, raio = 0, volume=0;

    cin>> raio;

    volume = (4.0/3) * const_pi * pow(raio,3);

    cout<<"VOLUME = "<<volume<<endl;
    return 0;
}