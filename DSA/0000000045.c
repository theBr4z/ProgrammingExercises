// Fonte: Fundamentos da Programação de Computadores: Algoritmos, Pascal, C, C++ e Java

#include <stdio.h>

int main(){

    int idade;
    scanf("%d",&idade);
    if(idade >= 5 && idade <= 7){printf("Infatil\n");}
    else if(idade >= 8 && idade <= 10){printf("Juvenil\n");}
    else if(idade >= 11 && idade <= 15){printf("Adolescente\n");}
    else if(idade >= 16 && idade <= 30){printf("Adulto\n");}
    else if(idade > 30){printf("Senior\n");}
    else{printf("Idade não permitida.\n");}

    return 0;
}