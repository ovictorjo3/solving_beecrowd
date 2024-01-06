#include<bits/stdc++.h>
using namespace std;

int main()
{
    cout<<fixed<<setprecision(1);

    double n1=0,n2=0,n3=0,n4=0,media=0,mediaf=0,exame=0;

    cin>>n1>>n2>>n3>>n4;

    media = (2*n1+3*n2+4*n3+n4)/10;

    cout<<"Media: "<<media<<endl;

    if(media>=7.0) cout<<"Aluno aprovado."<<endl;
    else if(media < 5.0) cout<<"Aluno reprovado."<<endl;
    else 
    {
        cout<<"Aluno em exame."<<endl;
        cin>>exame;
        cout<<"Nota do exame: "<<exame<<endl;

        mediaf = (media+exame) / 2.0;

        if(mediaf >= 5.0) cout<<"Aluno aprovado."<<endl;
        else cout<<"Aluno reprovado."<<endl;

        cout<<"Media final: "<<mediaf<<endl; 


    } 
    return 0;
}