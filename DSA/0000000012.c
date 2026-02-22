// Fonte: Fundamentos da Programação de Computadores: Algoritmos, Pascal, C, C++ e Java

#include <stdio.h>

int main(){
    float salario,salariominimo,quantidade;
    scanf("%f%f",&salario,&salariominimo);
    quantidade = salario / salariominimo;
    printf("%f",quantidade);
    return 0;
}