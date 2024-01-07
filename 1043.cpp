#include<bits/stdc++.h>
using namespace std;

int main()
{
    cout<<fixed<<setprecision(1);
    double a=0,b=0,c=0,area=0,perimetro=0;

    cin>>a>>b>>c;

    if(abs(b-c) < a && a < (b+c))
    {
        perimetro = a + b + c;
        cout<<"Perimetro = "<<perimetro<<endl;
    }

    else{
        area = ((a+b)*c)/2;
        cout<<"Area = "<<area<<endl;
    }
    return 0;
}

