// Fonte: Fundamentos da Programação de Computadores: Algoritmos, Pascal, C, C++ e Java

#include <stdio.h>

int main(){
    float salario,comissao,vendas,novosalario;
    scanf("%f%f",&salario,&vendas);
    comissao = vendas * 0.04;
    novosalario = salario + comissao;
    printf("%.2f",novosalario);
    return 0;
}