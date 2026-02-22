// Fonte: Fundamentos da Programação de Computadores: Algoritmos, Pascal, C, C++ e Java

#include <stdio.h>

int main(){

    float salario;
    scanf("%f",&salario);

    if(salario <= 350){
        salario += 100;}
    else if(salario > 350 && salario < 600){
        salario += 75;}
    else if(salario >= 600 && salario <= 900){
        salario += 50;}
    else{
        salario += 35;}
    salario = salario * 0.93;
    printf("%.2f",salario);
    return 0;
}