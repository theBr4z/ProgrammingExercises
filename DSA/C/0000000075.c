// Matéria: Estrutura de Dados
// Professor: Thyago Quintas
// Centro Universitário Senac SP
// Este arquivo é destinado para todos os exercícios feitos em aula de Estrutura de dados.

#include <stdio.h>
#include <stdlib.h>

void ImprimeInt(const int *p)
{
    if (p == NULL)
    {
        printf("Ponteiro Nulo. \n");
    }
    else
    {
        printf("%d\n", *p);
    }
    return;

    // Explicação: Ao passarmos apenas o ponteiro como variável e receber ele como ponteiro na função
    // Estamos basicamente recebendo o valor que ela está apontando quando indicamos com *p
    // Porém, ao realizarmos o print do ponteiro com *p após essa modificação, ele nos trás um conteúdo
    // Faz sentido apenas fazermos a comparação da variável com NULL devido ao ponteiro estar apontando
    // Para nada. Com isso, a gente apenas mostra depois o valor que ele está apontando.
}

void Incrementa(int *n)
{

    *n += 1;

    return;

    // Explicação: Ao realizarmos a declaração do ponteiro da main do programa, a gente envia
    // para a função Incrementa apenas como uma variável, com isso, na função ele vai pegar o que está apontando
    // e vai realizar um incremento na variável que a gente pegou o ponteiro.
}

void Swap(int *a, int *b)
{
    int aux = *a;
    *a = *b;
    *b = aux;
    return;

    // Explicação: Passamos os endereços de variável na main do arquivo e recebemos como ponteiros na função
    // através dessa função, a gente simplesmente pega com uma variável auxiliar o valor que "a" está apontando
    // jogamos para a o que b está apontando e para b o que aux recebeu de a.
}

void ApontaParaZero(int **pp, int *zero)
{
    *pp = zero;

    return;

    // Explicação: Enviamos para a função o endereço do ponteiro P para o ponteiro de ponteiro PP, o PP ele pode
    // apontar quando para um valor, quanto para um ponteiro. Ao passarmos o endereço de zero para a função que
    // está recebendo como ponteiro, a gente simplesmente aponta para o ponteiro recebendo o endereço de zero
    // ao final, o valor na função principal vai ser trocado para zero e não mais 250.
}

void ImprimeArray(const int *v, int n)
{

    for (int i = 0; i < n; i++)
    {
        printf("%d\n", *(v + i));
    }

    return;

    // Fazer explicação do funionamento
}

int strlenManual(const char *v)
{
    int value = 0;
    while (*v != '\0')
    {
        value++;
        v++;
    }
    return value;
}

typedef struct
{
    char nome[50];
    int ra;
    float nota;
} Aluno;

void CadastroDeAluno(const Aluno *a)
{
    if (a == NULL)
    {
        printf("Erro.");
    }
    else
    {
        printf("%s\n", a->nome);
        printf("%d\n", a->ra);
        printf("%.2f\n", a->nota);
    }

    // Aluno aluno1;
    // Aluno *p = &aluno1;

    // strcpy(p->nome, "Pedro Patricio");
    // p->ra = 123456;
    // p->nota = 6.0;

    // CadastroDeAluno(p);
}

int *CriaInt(int valor)
{
    int *p = malloc(sizeof(int));
    if (p == NULL)
    {
        printf("Falha na alocação de memória.\n");
        return 1;
    }

    *p = valor;
    return p;

    // int *x = CriaInt(25);
    // printf("%p\n", x);
    // printf("%d\n", *x);
    // free(x);
    // x = NULL;
}
typedef struct No
{
    int valor;
    struct No *prox;
} No;

void PushFront(No **head, int v)
{
    No *novo = malloc(sizeof(No));
    if (novo == NULL)
        return;
    novo->valor = v;
    novo->prox = *head;
    *head = novo
}

No *CriacaoNo(int valor)
{
    No *n1 = malloc(sizeof(No));
    if (n1 != NULL)
    {
        n1->valor = valor;
        n1->prox = NULL;
        return n1;
    }
    // No *n1 = CriacaoNo(60);
}

void ExibirNo(No *n)
{
    printf("[%d] -> NULL", n->valor);
    return;

    // ExibirNo(n1);
}

void main()
{
    return;
}