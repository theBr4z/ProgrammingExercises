#include <stdio.h>
#include <stdlib.h>

void TrocaValor(int *a, int *b)
{
    int aux = *b;
    *b = *a;
    *a = aux;
}

void MinMax(int vet[], int tam, int *min, int *max)
{
    *min = vet[0];
    *max = vet[0];
    for (int i = 0; i < tam; i++)
    {
        if (vet[i] > *max)
            *max = vet[i];
        else if (vet[i] < *min)
            *min = vet[i];
    }
}

void ZeraVetor(int *vet, int tam)
{
    for (int i = 0; i < tam; i++)
    {
        vet[i] = 0;
    }
}

void main()
{
    int vet[5] = {5, 3, 2, 1, 5}, *p;
    p = vet; // O ponteiro está apontando para o endereço da memória
    printf("%d", *(p + 1));
    return;
}