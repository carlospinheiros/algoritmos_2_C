/*
Programa em C que calcula resto da divisão com uma função recursiva.
*/

#include<stdio.h>

int funcao(int A, int B)
{
    if(A>=B)
    {
        printf("%d\n",A);
        return funcao(A-B,B);
    }
    else
    {
        printf("%d\n",A);
        return A;
    }
}

int main (void)
{
    int dividendo,divisor,resto;

    printf("Informe um NUMERO PARA SER O DIVIDENDO:\n");
    scanf("%d",&dividendo);
    printf("Informe um NUMERO PARA SER O DIVISOR:\n");
    scanf("%d",&divisor);

    printf("SEQUENCIA:\n");
    resto=funcao(dividendo,divisor);

    printf("\nRESTO DA DIVISAO %d/%d ==> %d\n",dividendo,divisor,resto);

    return 0;
}
