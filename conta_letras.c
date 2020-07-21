/*
Programa em C que conta as letras da palavra após informada uma letra.
*/

#include <stdio.h>
#include <string.h>

int contaLetras(char palavra[50],int t, char letra)
{
    int i, cont=0;

    for (i=0;i<t;i++)
    {
        if(letra==palavra[i])
        {
            cont++;
        }
    }
    return cont;
}

int main (void)
{
    int qtdLetras,tamanho;
    char p[50],letra;

    printf("Informe uma PALAVRA:\n");
    gets(p);

    printf("Para contar a QUANTIDADE DE LETRAS DA PALAVRA: %s, INFORME UMA LETRA:\n", p);
    scanf("%c",&letra);

    tamanho=strlen(p);
    qtdLetras=contaLetras(p,tamanho,letra);

    printf("QUANTIDADE DE LETRAS %c ==> %d\n",letra,qtdLetras);

    return 0;
}
