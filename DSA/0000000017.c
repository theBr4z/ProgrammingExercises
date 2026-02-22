// Fonte: Fundamentos da Programação de Computadores: Algoritmos, Pascal, C, C++ e Java

#include <stdio.h>
#define pi 3.141592653589793

int main(){
    double r;
    scanf("%lf",&r);
    float comprimento = 2*pi*r,area = 2*pi*(r*r),volume = (3/4)*pi*(r*r*r);
    printf("Comprimento:%f\n",comprimento);
    printf("Area:%f\n",area);
    printf("Volume:%f\n",volume);
    return 0;
}