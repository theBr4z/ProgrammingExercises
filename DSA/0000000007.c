// Fonte: Fundamentos da Programação de Computadores: Algoritmos, Pascal, C, C++ e Java

#include <stdio.h>

int main(){
    float peso,engordou,emagreceu;
    scanf("%f",&peso);
    engordou = peso * 1.15;
    emagreceu = peso * 0.8;
    printf("%.3f\n%.3f",engordou,emagreceu);
    return 0;
}