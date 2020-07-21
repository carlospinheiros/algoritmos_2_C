/*
Programa em C que soma coluna da matriz.
*/

#include<stdio.h>

void zeraVetor(int v[5])
{
    int i;

    for(i=0;i<5;i++)
    {
        v[i]=0;
    }
    return;
}

void somaColuna(int m[3][5],int v[5])
{
    int i,j;

    for(i=0;i<3;i++)
    {
        for(j=0;j<5;j++)
        {
            v[j]=v[j]+m[i][j];
        }
    }
    for(i=0;i<5;i++)
    {
        printf("SOMA - COLUNA %d ==> %d\n",i,v[i]);
    }
    return;
}

int main (void)
{
    int vetor[5],matrizM[3][5]={
    {2,3,5,6,9},
    {18,8,9,10,1},
    {9,4,5,8,20}
    };

    zeraVetor(vetor);
    somaColuna(matrizM,vetor);

    return 0;
}
