// Fonte: Fundamentos da Programação de Computadores: Algoritmos, Pascal, C, C++ e Java

#include <stdio.h>

int main(){
    int n1,n2,escolha;
    scanf("%d%d%d",&n1,&n2,&escolha);
    switch(escolha){
        case 1:
            float media = (n1+n2) / 2;
            printf("%f",media);
            break;
        case 2:
            int diferenca;
            if(n1 >= n2)
                diferenca = n1 - n2;
            else
                diferenca = n2 - n1;
            printf("%d",diferenca);
            break;
        case 3:
            int produto = n1 * n2;
            printf("%d",produto);
            break;
        case 4:
            float divisao = n1 / n2;
            printf("%f",divisao);
            break;
        default:
            printf("Opção errada.");
    }
}