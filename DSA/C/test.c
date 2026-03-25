#include <stdio.h>
#include <stdlib.h>

void TrocaValor(int *a, int *b)
{
    int aux = *b;
    *b = *a;
    *a = aux;
    return;
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
    return;
}

void ZeraTudo(int *v, int tam)
{
    for (int i = 0; i < tam; i++)
    {
        v[i] = 0;
    }
    return;
}

void ExibeVetor(int *b, int tam)
{
    for (int i = 0; i < tam; i++)
    {
        printf("%d ", *(b + i));
    }
    return;
}

int Comprimento(char *cores, char *cores2)
{

    do
    {
        *(cores2++) = *cores;
    } while (*(t++));

    return n;
}

void main()
{

    char *cores[] = {"vermelho", "azul", "amarelo", "verde"};
    char *cores2;
    printf("%d\n", Comprimento(cores, cores2));
    return;
}