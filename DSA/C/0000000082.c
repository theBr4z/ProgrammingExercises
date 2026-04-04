#include <stdio.h>
#include <stdlib.h>

typedef struct No
{
    int valor;
    struct No *prox;
} No;

void InserirInicioListaLigada(No **head, int valor)
{
    No *novo = malloc(sizeof(No));
    if (novo == NULL)
        return;
    novo->valor = valor;
    novo->prox = *head;
    *head = novo;
}

int *BuscaListaLigada(No **head, int valor)
{
    No *atual = *head;
    while (atual != NULL)
    {
        if (atual->valor == valor)
        {
            return atual;
        }
        atual = atual->prox;
    }
    return NULL;
}

void FazVerificao(No *head, int valor)
{
    int *x = BuscaListaLigada(&head, valor);
    if (x != NULL)
        printf("Valor encontrado: %p\n", x);
    else
        printf("Valor não encontrado.\n");
}

int main()
{
    No *head = NULL;
    InserirInicioListaLigada(&head, 10);
    InserirInicioListaLigada(&head, 20);
    InserirInicioListaLigada(&head, 30);
    InserirInicioListaLigada(&head, 40);
    InserirInicioListaLigada(&head, 50);
    FazVerificacao(head, 20);
    return 0;
}