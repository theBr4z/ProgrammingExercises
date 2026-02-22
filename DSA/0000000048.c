// Fonte: Fundamentos da Programação de Computadores: Algoritmos, Pascal, C, C++ e Java

#include <stdio.h>

int main(){
    int codigo,quantidade;
    float precounit,precototal,desconto,precofinal,precodescontado;

    scanf("%d%d",&codigo,&quantidade);
    if(codigo >= 1 && codigo <= 10){precounit = 10;}
    else if(codigo >= 11 && codigo <= 20){precounit = 15;}
    else if(codigo >= 21 && codigo <= 30){precounit = 20;}
    else if(codigo >= 31 && codigo <= 40){precounit = 30;}
    
    precototal = quantidade * precounit;
    
    if(precototal < 250)
        desconto = precototal * 0.05;
    else if(precototal >= 250 && precototal <= 500)
        desconto = precototal * 0.10;
    else
        desconto = precototal * 0.15;
    
    precodescontado = precototal - desconto;

    printf("Valor unitario: R$ %.2f\n",precounit);
    printf("Preco Total da Nota: R$ %.2f\n",precototal);
    printf("Valor do desconto: R$ %.2f\n",desconto);
    printf("Preco final: R$ %.2f\n",precodescontado);

    return 0;
}