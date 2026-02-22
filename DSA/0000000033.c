// Fonte: Fundamentos da Programação de Computadores: Algoritmos, Pascal, C, C++ e Java

#include <stdio.h>

int main(){
    float salario;
    scanf("%f",&salario);
    if(salario <= 300)
        salario = salario * 1.35;
    else
        salario = salario * 1.15;
    printf("%.2f",salario);
    return 0;
}