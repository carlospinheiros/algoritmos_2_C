/*
Programa em C que verifica se a palavra é um palindromo.
Obs.: Um palíndromo é uma palavra que tem a propriedade de poder ser lida tanto da direita para a esquerda como da esquerda para a direita.
*/

#include <stdio.h>
#include <string.h>

int verificaPalindromo (char palavra[50],int t)
{
	int i,j;

	for(i=0,j=t-1;i<t,j>=0;i++,j--)
	{
		if(palavra[i]!=palavra[j])
		{
			return 0;
		}
		return 1;
	}
}

int main (void)
{
	int tamanho, retorno;
	char s[50];

	printf("Informe UMA PALAVRA ou NOME:\n");
	gets(s);

	tamanho=strlen(s);
	retorno=verificaPalindromo(s,tamanho);

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
