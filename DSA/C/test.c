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

void Incrementa(int *p)
{

    (*p)++;

    return;
}

void Decrementa(int *p)
{
    (*p)--;
    return;
}

typedef struct No
{
    int valor;
    struct No *ant;
    struct No *prox;
} No;

void InsereValor(No **head, int v)
{
    No *novo = (No *)malloc(sizeof(No));
    novo->valor = v;
    novo->ant = NULL;
    novo->prox = *head;

    if (*head != NULL)
        (*head)->ant = novo;

    *head = novo;
}

void Imprimir(No *p)
{
    printf("NULL");
    while (p != NULL)
    {
        printf("<-[%d]->", p->valor);
        p = p->prox;
    }
    printf("NULL");
}

void rimirpmi(No *p)
{
    printf("NULL");
    while (p->prox != NULL)
        p = p->valor;
    while (p->ant != NULL)
    {
        printf("<-[%d]->", p->valor);
        p = p->ant;
    }
    printf("NULL");
}

void inserir_fim(No **head, int v)
{

    No *novo = (No *)malloc(sizeof(No));
    novo->valor = v;
    novo->prox = NULL;

    if (*head == NULL)
    {
        novo->ant = NULL;
        *head = novo;
        return;
    }

    No *p = *head;
    while (p->prox != NULL)
    {
        p = p->prox;
    }

    p->prox = novo;
    novo->ant = p;
}

void main()
{
    No *head = NULL;
    InsereValor(&head, 2);
    InsereValor(&head, 27);
    InsereValor(&head, 9);
    InsereValor(&head, 16);
    Imprimir(head);
    return;
}