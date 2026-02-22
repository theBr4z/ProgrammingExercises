// Fonte: Fundamentos da Programação de Computadores: Algoritmos, Pascal, C, C++ e Java

#include <stdio.h>

int main(){
    int senha;
    scanf("%d",&senha);
    switch(senha){
        case 4531:
            printf("Acesso Valido.");
            break;
        default:
            printf("Acesso Negado.");
            break;
    }
    return 0;
}