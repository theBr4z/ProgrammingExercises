// Fonte: Fundamentos da Programação de Computadores: Algoritmos, Pascal, C, C++ e Java

#include <stdio.h>
#include <math.h>

int main(){
    float cateto1,cateto2,hipotenusa;
    scanf("%f%f",&cateto1,&cateto2);
    hipotenusa = sqrt(pow(2,cateto1) + pow(2,cateto2));
    printf("%f",hipotenusa);
    return 0;
}