#include<bits/stdc++.h>
using namespace std;

int main()
{
    cout<<fixed<<setprecision(2);

    int nfun=0, nhoras=0;
    double nqhoras=0, dindin=0;

    cin>>nfun>>nhoras;
    cin>>nqhoras;

    dindin = nhoras * nqhoras;

    cout<<"NUMBER = "<<nfun<<endl;
    cout<<"SALARY = U$ "<<dindin<<endl;
    return 0;
}