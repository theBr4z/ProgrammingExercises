// Fonte: Fundamentos da Programação de Computadores: Algoritmos, Pascal, C, C++ e Java

#include <stdio.h>
#define length 15

int main(){
    int arrayzao[length];
    for(int i = 0; i < length; i++){
        int x;
        scanf("%d",&x);
        arrayzao[i] = x;
    }
    for(int i = 0; i < length ; i++){
        if(arrayzao[i] == 30){
            printf("%d ",i);
        }
    }
    return 0;
}