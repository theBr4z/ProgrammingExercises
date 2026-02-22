// Fonte: Fundamentos da Programação de Computadores: Algoritmos, Pascal, C, C++ e Java

#include <stdio.h>

int main(){

    float salario;
    scanf("%f",&salario);

    if(salario < 300){salario = salario * 1.50;}
    else if(salario > 300 && salario <= 500){salario = salario * 1.40;}
    else if(salario > 500 && salario <= 700){salario = salario * 1.30;}
    else if(salario > 700 && salario <= 800){salario = salario * 1.20;}
    else if(salario > 800 && salario <= 1000){salario = salario * 1.10;}
    else{salario = salario * 1.05;}
    printf("%.2f",salario);

    return 0;
}