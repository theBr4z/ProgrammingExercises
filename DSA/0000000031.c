// Fonte: Fundamentos da Programação de Computadores: Algoritmos, Pascal, C, C++ e Java

#include <stdio.h>
#include <math.h>

int main(){
    int a,b;scanf("%d%d",&a,&b);
    printf("(a) O primeiro número elevado ao segundo número.\n");
    printf("(b) Raiz quadrada de cada um dos números.\n");
    printf("(c) Raiz cúbica de cada um dos números.\n");
    char c;
    scanf("%c", &c);

    switch(c){
        case 'a':
                int pot = pow(b,a);
                printf("%d",pot);
            break;
        case 'b':
                int a1 = pow(2,a); 
                int a2 = pow(2,b);
                printf("%d %d",a1,a2);
            break;
        case 'c':
                int a3 = pow(3,a);
                int a4 = pow(3,b);
                printf("%d %d",a1,a2);
            break;
        default:
            printf("Opção inválida.\n");
            break;
    }
    return 0;
}