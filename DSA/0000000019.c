// Fonte: Fundamentos da Programação de Computadores: Algoritmos, Pascal, C, C++ e Java

#include <stdio.h>

int main(){
    float altura,largura,potencia,area;
    scanf("%f%f",&altura,&largura);
    area = altura * largura;
    potencia = area / 18;
    printf("%f m2 %fW",area,potencia);
    return 0;
}