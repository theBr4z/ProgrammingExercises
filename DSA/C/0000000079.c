#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int valor;
    struct No *prox;
} No;

No *CriadorDeNo(int valor)
{
    No *n1 = malloc(sizeof(No));
    if (n1 != NULL)
    {
        n1->valor = valor;
        n1->prox = NULL;
        return n1;
    }
    return -1;
}

int main()
{
    No *n1 = CriadorDeNo(25);
    printf("[%d] -> NULL", n1->valor);
    free(n1);
    return 0;
}