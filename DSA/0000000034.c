// Fonte: Fundamentos da Programação de Computadores: Algoritmos, Pascal, C, C++ e Java

#include <stdio.h>

int main(){
    float saldomedio, credito;
    scanf("%f",&saldomedio);
    if(saldomedio <= 200)
        credito = saldomedio * 0.10;
    else if(saldomedio > 200 && saldomedio <= 300)
        credito = saldomedio * 0.20;
    else if(saldomedio > 300 && saldomedio <= 400)
        credito = saldomedio * 0.25;
    else
        credito = saldomedio * 0.30;
    printf("Saldo medio: %.2f\n",saldomedio);
    printf("Credito: %.2f\n",credito);
    return 0; 
}