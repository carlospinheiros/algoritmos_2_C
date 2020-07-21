/*
Algoritmo de ordenação: SelectionSort
*/

#include <stdio.h>

void selection_sort(int vetor[],int n)
{
    int i,j,menor,aux;

    for(i=0;i<n-1;i++){
        menor = i;
        for(j=i+1;j<n;j++)
        {
            if(vetor[menor]>vetor[j])
                menor = j;
        }
        if(i!=menor){
            aux = vetor[i];
            vetor[i] = vetor[menor];
            vetor[menor] = aux;
        }
    }
    /*exibe elementos ordenados*/
    printf("ELEMENTOS ORDENADOS (CRESCENTE):\n");
    printf("==> [ ");
    for(i=0;i<n;i++)
    {
        printf("%d ",vetor[i]); /*exibe o vetor ordenado*/
    }
    printf("]\n");
    return;
}

int main (void)
{
    int n=7,vetor[7]={23,4,67,-8,90,54,21};

    selection_sort(vetor,n);

    return 0;
}
