// Fonte: Fundamentos da Programação de Computadores: Algoritmos, Pascal, C, C++ e Java

#include <stdio.h>

int main(){
    float kilogramas,gramas;
    scanf("%f",&kilogramas);
    gramas = kilogramas * 1000;
    printf("%.3f",gramas);
    return 0;
}