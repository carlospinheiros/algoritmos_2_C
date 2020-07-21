/*
Programa em C que calcula uma PG com função recursiva.
*/

#include<stdio.h>

void calculaPG(int a1,int n, int q)
{
    if(n>0)
    {
        printf("%d\n",a1);
        calculaPG(a1*q,n-1,q);
    }
    return;
}

int main (void)
{
    int termo1,numTermos,razao;

    printf("Para calcular uma PG, informe na ordem: 1o TERMO, TOTAL DE TERMOS E A RAZAO.\n");
    scanf("%d%d%d",&termo1,&numTermos,&razao);

    printf("SEQUENCIA:\n");
    calculaPG(termo1,numTermos,razao);

    return 0;
}
