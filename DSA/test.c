/*

*/

#include <stdio.h>
#include <stdbool.h>


void inserevalor(int valor,int array[],int *qtd){
    printf("%d\n",*qtd);
    array[*qtd] = valor;
    (*qtd)++;
}

int main(){
    
    int array[5];
    int qtd = 0;

    inserevalor(40,array,&qtd);
    inserevalor(69,array,&qtd);
    inserevalor(15,array,&qtd);
    inserevalor(16,array,&qtd);
    inserevalor(2,array,&qtd);
    
    return 0;
}