// Fonte: Fundamentos da Programação de Computadores: Algoritmos, Pascal, C, C++ e Java

#include <stdio.h>

int main(){
    float nota1,nota2,media;
    scanf("%f%f",&nota1,&nota2);
    media = (nota1 * 2 + nota2*3) / (2+3);
    printf("%f",media);
    return 0;
}