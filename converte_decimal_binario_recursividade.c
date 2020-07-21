/*
Programa em C que converte um número decimal em binário usando uma função recursiva.
*/

#include<stdio.h>

void binario(int num)
{
    if(num>0)
    {
        binario(num/2);
        printf("%d",num%2);
    }
    return;
}

int main (void)
{
    int num;

    printf("Informe um NUMERO DECIMAL PARA CONVERTER EM BINARIO:\n");
    scanf("%d",&num);

    binario(num);

    return 0;
}
