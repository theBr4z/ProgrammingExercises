// Fonte: Fundamentos da Programação de Computadores: Algoritmos, Pascal, C, C++ e Java

#include <stdio.h>

int main(){
    int n, nd;
    scanf("%d",&n);
    nd = n * (n-3) / 2;
    printf("Diagonais: %d",nd);
    return 0;
}