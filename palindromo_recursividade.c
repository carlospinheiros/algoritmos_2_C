/*
Programa em C que verifica se a palavra é um palindromo usando uma função recursiva.
Obs.: Um palíndromo é uma palavra que tem a propriedade de poder ser lida tanto da direita para a esquerda como da esquerda para a direita.
*/

#include <stdio.h>
#include <string.h>

int rPalindromo(char palavra[50],int i,int j)
{
    if(i<=j)
    {
        if(palavra[i]!=palavra[j-1])
        {
            return 0;
        }
        else
        {
            return rPalindromo(palavra,i+1,j-1);
        }
    }
    else
    {
        return 1;
    }
}

int main (void)
{
    int tamanho,retorno,regressivo=0;
    char s[50];

	printf("Informe UMA PALAVRA ou NOME:\n");
	gets(s);

	tamanho=strlen(s);
	retorno=rPalindromo(s,regressivo,tamanho);

	if(retorno==1)
    {
        printf("PALINDROMO!\n");
    }
    else
    {
       printf("NAO E PALINDROMO!!!\n");
    }
	return 0;
}
