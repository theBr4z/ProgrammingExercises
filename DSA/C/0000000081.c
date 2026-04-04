#include <stdio.h>
#include <stdlib.h>

typedef struct No
{
    int valor;
    struct No *prox;
} No;

void InsercaoNoFimDaLista(No **head, int valor)
{
    No *novo = (No *)malloc(sizeof(No));
    if (novo == NULL)
        return;

    novo->valor = valor;
    novo->prox = NULL;

    if (*head == NULL)
    {
        *head = novo;
        return;
    }
    No *atual = *head;
    while (atual->prox != NULL)
    {
        atual = atual->prox;
    }
    atual->prox = novo;
}

void Imprimir(No *head)
{
    for (No *p = head; p != NULL; p = p->prox)
    {
        printf("[%d] -> ", p->valor);
    }
    printf("NULL\n");
}

int main()
{
    No *head = NULL;
    InsercaoNoFimDaLista(&head, 10);
    InsercaoNoFimDaLista(&head, 20);
    InsercaoNoFimDaLista(&head, 30);
    InsercaoNoFimDaLista(&head, 40);
    Imprimir(head);
    return 0;
}
