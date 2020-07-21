/*
Programa em C que gera uma matriz.
*/

#include<stdio.h>

void geraMatriz(int m[5][5])
{
    int i,j;

    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            m[i][j]=i+j+1;
        }
    }
    printf("MATRIZ:\n");
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            printf("%d-",m[i][j]);
        }
        printf("\n");
    }
    return;
}

int main (void)
{
    int matriz[5][5];

    geraMatriz(matriz);

    return 0;
}
