/*
Suponha a existência de uma lista encadeada, do tipo TLista, inicialmente vazia.
Pede-se o desenvolvimento de um programa que, através de um menu, permita ao usuário realizar as seguintes operações sobre a lista:
1) Inserção de um novo número;
2) Remoção de todas as ocorrências de determinado valor;
3) Remoção do elemento que encontra-se em uma dada posição;
4) Alteração de todas as ocorrências de um valor por outro;
5) Busca de determinado número, retornando posição (do tipo TLista) de sua primeira ocorrência (caso exista na lista);
6) Exibição de todos os elementos da lista.
*/

#include <stdio.h>
#include <stdlib.h>
#define FALSE 0
#define TRUE 1

typedef struct No {
	int valor;
	struct No* prox;
} TNo;

typedef TNo* TLista;

int inserir (TLista *L, int numero);
int remover (TLista *L, int numero);
int alterar (TLista L, int velho, int novo);
int buscar (TLista L, int numero);
void exibir (TLista L);

int menu ();

int inserir (TLista *L, int numero)
{
	TLista aux = (TLista) malloc (sizeof(TNo));

	if (aux == NULL)
	{
		return FALSE;
	}
	else
	{
		aux->valor = numero;
		aux->prox = *L;
		*L = aux;
		return TRUE;
	}
}

int remover (TLista *L, int numero)
{
	TLista aux, aux2;
	int cont=0;

	while ((*L) && (*L)->valor==numero)
	{
		aux = *L;
		*L=aux->prox;
		free(aux);
		cont++;
	}
	if (*L)
	{
		aux=*L;
		aux2=aux->prox;

		while(aux2!=NULL)
		{
			if(aux2->valor==numero)
			{
				aux->prox=aux2->prox;
				cont++;
				free(aux2);
				aux2 = aux->prox;
			}
			else
			{
				aux = aux2;
				aux2 = aux2->prox;
			}
        }
    }
	if (cont == 0)
    {
        return FALSE;
    }
    else
    {
        return TRUE;
    }
}

int alterar (TLista L, int velho, int novo)
{
    int cont=0;
	TLista aux = L;

    while (aux)
    {
        if (aux->valor == velho)
        {
            aux->valor = novo;
            cont++;
        }
        aux = aux->prox;
    }
	if (cont == 0)
	{
		return FALSE;
	}
	else
	{
		return TRUE;
	}
}

int buscar (TLista L, int numero)
{
	TLista aux = L;

	while (aux)
	{
		if (aux->valor == numero)
		{
			return TRUE;
		}
		aux = aux->prox;
	}
	return FALSE;
}

void exibir (TLista L)
{
	TLista aux = L;

	if (!L)
	{
		printf ("LISTA VAZIA!\n");
	}
	else
	{
	    printf ("LISTA: ");
		while (aux != NULL)
		{
			printf ("| %d ", aux->valor);
			aux = aux->prox;
		}
		printf ("|\n\n");
	}
}

int menu()
{
    int op;

    system("cls");

    printf("-- MENU DE OPCOES --\n");
    printf("(1) INSERIR\n");
    printf("(2) ALTERAR\n");
    printf("(3) BUSCAR\n");
    printf("(4) REMOVER\n");
    printf("(5) EXIBIR\n");
    printf("(6) SAIR\n");
    printf("ENTRE COM SUA OPCAO: ");
    scanf("%d",&op);

    return op;
}

int main (void)
{
    TLista L = NULL;
    int opcao,num1,num2;

    do
    {
        opcao = menu();

        switch (opcao)
        {
            case 1: printf("Entre COM O NUMERO A SER INSERIDO:\n");
                    scanf("%d",&num1);

                    if(inserir(&L,num1)==TRUE)
                    {
                        printf("ELEMENTO INSERIDO!\n");
                    }
                    else
                    {
                        printf("ERRO! ELEMENTO NAO INSERIDO!\n");
                    }
                    break;
            case 2: printf("Entre COM O NUMERO A SER ALTERADO:\n");
                    scanf("%d",&num1);

                    printf("Entre COM O NOVO NUMERO:\n");
                    scanf("%d",&num2);

                    if (alterar(L,num1,num2)==TRUE)
                    {
                        printf("ELEMENTO ALTERADO!\n");
                    }
                    else
                    {
                        printf("ERRO! ELEMENTO NAO ALTERADO!\n");
                    }
                    break;
            case 3: printf("Entre COM O NUMERO A SER BUSCADO:\n");
                    scanf("%d",&num1);

                    if(buscar(L,num1)==TRUE)
                    {
                        printf("ELEMENTO ENCONTRADO!\n");
                    }
                    else
                    {
                        printf("ELEMENTO NAO ENCONTRADO!\n");
                    }
                    break;
            case 4: printf("Entre COM O NUMERO A SER REMOVIDO:\n");
                    scanf("%d",&num1);

                    if(remover(&L,num1)==TRUE)
                    {
                        printf("ELEMENTO REMOVIDO!\n");
                    }
                    else
                    {
                        printf("ERRO! ELEMENTO NAO FOI REMOVIDO!\n");
                    }
                    break;
            case 5: exibir(L);
                    break;
            case 6: printf("FIM DO PROGRAMA!\n");
                    break;

            default: printf("OPCAO INVALIDA! TENTE NOVAMENTE!!!\n");
            }
            system("pause");
    }
    while(opcao!=6);
    return 0;
}
