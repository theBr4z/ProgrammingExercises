// Fonte: Fundamentos da Programação de Computadores: Algoritmos, Pascal, C, C++ e Java

#include <stdio.h>

int main(){
    float area,diagonalmenor,diagonalmaior;
    scanf("%f%f",&diagonalmenor,&diagonalmaior);
    area = (diagonalmaior + diagonalmenor) / 2;
    printf("%f",area);
    return 0;
}