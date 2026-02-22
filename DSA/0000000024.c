// Fonte: Fundamentos da Programação de Computadores: Algoritmos, Pascal, C, C++ e Java

#include <stdio.h>

int main(){
    float real;
    printf("Quantidade que tem para viajar: ");scanf("%f",&real);
    float dolar = 1.80 * real, marcoalemao = 2.0 * real, libraesterlina = 3.57 * real;
    printf("Dolar: %.2f\n",dolar);
    printf("Marco Alemao: %.2f\n",marcoalemao);
    printf("Libra Esterlina: %f\n",libraesterlina);
}