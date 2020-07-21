/*
Programa em C que gera uma matriz transposta.
*/

#include<stdio.h>

void transposta(int a[3][3],int b[3][3])
{
    int i,j;

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            b[j][i]=a[i][j];
        }
    }
    printf("MATRIZ TRANSPOSTA:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d-",b[i][j]);
        }
        printf("\n");
    }
    return;
}

int main (void)
{
    int matrizT[3][3],matriz[3][3]={
    {2,5,6},
    {1,25,9},
    {41,88,20}
    };

    transposta(matriz,matrizT);

    return 0;
}





