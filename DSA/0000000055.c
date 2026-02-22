// Fonte: Fundamentos da Programação de Computadores: Algoritmos, Pascal, C, C++ e Java

#include <stdio.h>

int main(){
    int alunosLogica[15], alunosLP[10], alunosSimul[35], quantidade = 0;
    printf("\nAlunos de Logica:\n");
    for(int i = 0; i < 15; i++){
        int x;
        scanf("%d",&x);
        alunosLogica[i] = x;
    }
    printf("\nAlunos de Linguagem de Programação:\n");
    for(int i = 0; i < 10; i++){
        int n;
        scanf("%d",&n);
        alunosLP[i] = n;
    }
    for(int i = 0; i < 15; i++){
        for(int j = 0; j < 10; j++){
            if(alunosLogica[i] == alunosLP[j]){
                alunosSimul[quantidade] = alunosLogica[i];
                quantidade++;
            }
        }
    }
    printf("Matriculas simultâneas dos cursos de Lógica e Linguagem de Programação:\n");
    for(int i = 0; i < quantidade; i++){
        printf("%d ", alunosSimul[i]);
    }

    return 0;
}