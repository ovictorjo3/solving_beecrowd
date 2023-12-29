#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a=0,b=0,c=0,aux=0,maior=0;

    scanf("%d %d %d", &a,&b,&c);

    if (a>b) aux = a;
    else aux = b;

    maior = (aux+c+abs(aux-c))/2;

    printf("%d eh o maior\n",maior);

    return 0;
}