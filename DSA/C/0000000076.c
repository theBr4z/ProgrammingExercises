#include <stdio.h>
#include <stdlib.h>

struct Pessoa
{
    char nome[50];
    char endereco[100];
    int idade;
    char profissao[20];
};

int main()
{

    struct Pessoa p1;
    printf("Escreva seu nome:");
    fgets(p1.nome, 50, stdin);
    printf("Escreva seu Endereço:");
    fgets(p1.endereco, 100, stdin);
    printf("Escreva sua profissão:");
    fgets(p1.profissao, 20, stdin);
    printf("Escreva sua idade:");
    scanf("%d", &p1.idade);

    printf("Dados pessoas:\n");
    printf("Nome:%s", p1.nome);
    printf("Endereco:%s", p1.endereco);
    printf("Profissão:%s", p1.profissao);
    printf("Idade:%d", p1.idade);

    return 0;
}