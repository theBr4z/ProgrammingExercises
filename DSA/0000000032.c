// Fonte: Fundamentos da Programação de Computadores: Algoritmos, Pascal, C, C++ e Java

#include <stdio.h>

int main(){
    float salario;
    scanf("%f",&salario);
    if(salario < 500)
        salario = salario * 1.30;
    else
        printf("Salario nao reajustado.\n");
    printf("%.2f\n",salario);
}