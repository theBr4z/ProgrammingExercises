// Fonte: Fundamentos da Programação de Computadores: Algoritmos, Pascal, C, C++ e Java

#include <stdio.h>

int main(){
    float celsius, fahrenheit;
    scanf("%f",&celsius);
    fahrenheit = 180 * (celsius + 32) / 100;
    printf("%.0f Celsius\n",celsius);
    printf("%.0f Fahrenheit\n",fahrenheit);
    return 0;
}