// Fonte: Fundamentos da Programação de Computadores: Algoritmos, Pascal, C, C++ e Java

#include <stdio.h>
#define func 10

int main(){
    float comissao[func],vendas[func];
    char nomes[func][20];

    for(int i = 0; i < func; i++){
        int x;
        float y;
        
        printf("Vendas:");
        scanf("%d",&x);
        vendas[i] = x;
        printf("Percentual de comissao:");
        scanf("%f",&y);
        comissao[i] = y;
        printf("Funcionario:");
        scanf("%s",nomes[i]);
    }

    printf("\nRelatorio final:\n");
    for(int i = 0;i < func; i++){
        printf("Vendedor: %s - Vendas: R$ %.2f\n",nomes[i],vendas[i]);
    }
    float totalvendas = 0;
    for(int i = 0; i < 10; i++){
        totalvendas += vendas[i];
    }
    printf("Total de vendas: R$ %.2f",vendas);
    float maiorsalario = totalvendas / 2, menorsalario = totalvendas / 2,indice;
    for(int i = 0; i < func; i++){
        if(vendas[i] >= maiorsalario){
            maiorsalario = vendas[i];
            indice = i;
        }
    }
    printf("Miaio")

    for(int i = 0; i < func; i++){
        if(vendas[i] <= menorsalario){
            menorsalario = vendas[i];
        }
    }


    return 0;
}