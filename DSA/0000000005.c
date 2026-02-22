// Fonte: Fundamentos da Programação de Computadores: Algoritmos, Pascal, C, C++ e Java

#include <stdio.h>

int main(){
    float produto,desconto;
    scanf("%f",&produto);
    desconto = produto * 0.9;
    printf("%.2f",desconto);
    return 0;
}