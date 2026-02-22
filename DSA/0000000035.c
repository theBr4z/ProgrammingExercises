// Fonte: Fundamentos da Programação de Computadores: Algoritmos, Pascal, C, C++ e Java

#include <stdio.h>

int main(){
    float custofabrica,precoconsumidor;
    scanf("%f",&custofabrica);
    if(custofabrica <= 12000)
        precoconsumidor = custofabrica * 1.05;
    else if(custofabrica > 12000 && custofabrica <= 25000)
        precoconsumidor = custofabrica * 1.25;
    else
        precoconsumidor = custofabrica * 1.35;
    printf("%.2f",precoconsumidor);
    return 0;
}