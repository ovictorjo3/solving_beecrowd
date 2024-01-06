#include<bits/stdc++.h>
using namespace std;

int main()
{
    double p1,p2;

    cin>>p1>>p2;

    if(p1 == 0.0 && p2 == 0.0) cout<<"Origem"<<endl;
    else if(p1==0 && p2!=0) cout<<"Eixo Y"<<endl;
    else if(p2==0 && p1!=0) cout<<"Eixo X"<<endl;
    else if(p1>0 && p2>0) cout<<"Q1"<<endl;
    else if(p1<0 && p2>0) cout<<"Q2"<<endl;
    else if(p1<0 && p2<0) cout<<"Q3"<<endl;
    else if(p1>0 && p2<0) cout<<"Q4"<<endl;


    return 0;
}