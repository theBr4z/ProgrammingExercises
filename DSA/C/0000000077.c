#include <stdio.h>
#include <stdlib.h>

struct aluno
{
    char registroacademico[50];
    char nome[100];
    int nota1;
    int nota2;
    int nota3;
};

int main()
{
    struct aluno a1;
    printf("Digite seu registro acadêmico:");
    fgets(a1.registroacademico, 50, stdin);
    printf("Digite seu nome completo:");
    fgets(a1.nome, 100, stdin);
    printf("Digite as seguintes notas:\n");
    printf("Nota 1:");
    scanf("%d", &a1.nota1);
    printf("Nota 2:");
    scanf("%d", &a1.nota2);
    printf("Nota 3:");
    scanf("%d", &a1.nota3);
    float media = (a1.nota1 + a1.nota2 + a1.nota3) / 3.0;
    printf("Dados do aluno:\n");
    printf("Registro acadêmico: %s", a1.registroacademico);
    printf("Nome completo: %s", a1.nome);
    printf("Media das notas: %.2f", media);
    return 0;
}