// Fonte: Fundamentos da Programação de Computadores: Algoritmos, Pascal, C, C++ e Java

#include <stdio.h>

int main(){
    int anoatual,anonascimento;
    scanf("%d%d",&anonascimento,&anoatual);
    
    int anos = (anoatual - anonascimento), meses = 12 * anos, dias = 365 * anos, semanas = anos * 52;
    printf("%d anos\n",anos);
    printf("%d meses\n",meses);
    printf("%d semanas\n",semanas);
    printf("%d dias\n",dias);
    
    return 0;
}