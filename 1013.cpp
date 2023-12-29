// 1013 - o maior

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a=0,b=0,c=0,aux=0,ehmaior=0;

    cin>>a>>b>>c;

    if (a>b) aux = a;
    else aux = b;

    ehmaior = (aux+c+abs(aux-c))/2;

    cout<<ehmaior<< " eh o maior"<<endl;
    return 0;
}