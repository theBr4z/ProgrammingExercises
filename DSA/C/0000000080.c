#include <stdio.h>
#include <stdlib.h>

typedef struct No
{
    int valor;
    struct No *prox;
} No;

void InsercaoDeNo(No **head, int valor)
{
    No *novo = (No *)malloc(sizeof(No));
    if (novo == NULL)
        return;
    novo->valor = valor;
    novo->prox = *head;
    *head = novo;
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
    InsercaoDeNo(&head, 30);
    InsercaoDeNo(&head, 40);
    InsercaoDeNo(&head, 50);
    InsercaoDeNo(&head, 60);
    Imprimir(head);

    return 0;
}