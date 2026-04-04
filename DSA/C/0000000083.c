#include <stdio.h>
#include <stdlib.h>

typedef struct No
{
    int valor;
    struct No *ant;
    struct No *prox;
} No;

void InsercaoDuplamente(No **head, int valor)
{
    No *novo = (No *)malloc(sizeof(No));
    if (novo == NULL)
        return;
    novo->valor = valor;
    novo->ant = NULL;
    novo->prox = *head;
    if (*head != NULL)
    {
        (*head)->ant = novo;
    }
    *head = novo;
};

int main()
{
    No *head = NULL;
    InsercaoDuplamente(&head, 25);
}