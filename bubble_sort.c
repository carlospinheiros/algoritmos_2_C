/*
Algoritmo de ordenação: BubbleSort
*/

#include <stdio.h>

void bubble_sort(int vetor[],int n)
{
    int i,j,aux;

    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if (vetor[i]>vetor[j])
            {
                aux = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = aux;
            }
        }
    }
    /*exibe elementos ordenados*/
    printf("ELEMENTOS ORDENADOS (CRESCENTE):\n");
    printf("==> [-");
    for(i=0;i<n;i++)
    {
        printf("%d-",vetor[i]); /*exibe o vetor ordenado*/
    }
    printf("]\n");
    return;
}

int main(void)
{
    int n=5,vetor[5]={3,5,1,2,4};

    bubble_sort(vetor,n);

    return 0;
}
