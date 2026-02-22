// Fonte: Fundamentos da Programação de Computadores: Algoritmos, Pascal, C, C++ e Java

#include <stdio.h>

int main(){

    float media,nota1,nota2;
    scanf("%f%f",&nota1,&nota2);
    media = (nota1 + nota2) / 2;
    if(media < 3.0)
        printf("Reprovado.\n");
    else if(media >= 3 && media < 7.0)
        printf("Exame.\n");
    else
        printf("Aprovado.\n");

}