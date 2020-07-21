/*
Programa em C que verifica simetria matriz.
*/

#include<stdio.h>

int verificaSimetria(int m[3][3])
{
    int i,j;

    for (i=0;i<2;i++)
    {
        for (j=i+1;j<3;j++)
        {
            if(m[i][j]!=m[j][i])
            {
                return 0;
            }
        }
    }
    return 1;
}

int main (void)
{
    int retorno,matriz[3][3]={
    {3,1,2},
    {1,4,3},
    {2,3,6}
    };

    retorno=verificaSimetria(matriz);

    if(retorno==1)
    {
        printf("MATRIZ SIMETRICA!\n");
    }
    else
    {
        printf("MATRIZ NAO E SIMETRICA!\n");
    }
    return 0;
}
