#include<bits/stdc++.h>
using namespace std;

int main()
{
    cout<<fixed<<setprecision(5);

    double a=0,b=0,c=0,delta=0,x1=0,x2=0;

    cin>>a>>b>>c;

    delta = pow(b,2) - 4*a*c;

    if(delta < 0 || a==0) cout<<"Impossivel calcular"<<endl;

    else if(delta == 0)
    {
        x1 = x2 = (-b + sqrt(delta)) / (2*a);
        cout<<"R1 = "<<x1<<endl;
        cout<<"R2 = "<<x2<<endl;
    }

    else
    {
        x1 = (-b + sqrt(delta)) / (2*a);
        x2 = (-b - sqrt(delta)) / (2*a);

        cout<<"R1 = "<<x1<<endl;
        cout<<"R2 = "<<x2<<endl;
    }
    return 0;
}