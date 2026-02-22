// Fonte: Fundamentos da Programação de Computadores: Algoritmos, Pascal, C, C++ e Java

#include <stdio.h>

int main(){
    int tipo;
    float valor,investimento;

    scanf("%d%f",&tipo,&valor);

    switch(tipo){
        case 1:
            investimento = valor * 0.03;
            break;
        case 2:
            investimento = valor * 0.04;
            break;
        default:
            printf("Opcao invalida.\n");
            break;
    }
    valor += investimento;
    printf("Valor corrigido: %.2f\n",valor);

    return 0;
}