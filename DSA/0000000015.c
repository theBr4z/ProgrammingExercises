// Fonte: Fundamentos da Programação de Computadores: Algoritmos, Pascal, C, C++ e Java

#include <stdio.h>

int main(){
    float salario,conta1,conta2;
    scanf("%f%f%f",&salario,&conta1,&conta2);
    float restante = salario - (0.02 * (conta1  + conta2));
    printf("%.2f",restante);
    return 0;
}