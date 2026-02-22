// Fonte: Fundamentos da Programação de Computadores: Algoritmos, Pascal, C, C++ e Java

#include <stdio.h>

int main(){
    float area,basemaior,basemenor,altura;
    scanf("%f%f%f",&basemaior,&basemenor,&altura);
    area = ((basemaior + basemenor) * altura) / 2;
    printf("%f",area);
    return 0;
}