// https://judge.beecrowd.com/pt/problems/view/1080

#include <stdio.h>

int main()
{

    int vet[101], maior = 0, posicao = 0;

    for (int i = 1; i <= 100; i++)
    {
        int entrada;
        scanf("%d", &entrada);
        vet[i] = entrada;
        if (vet[i] > maior)
        {
            maior = vet[i];
            posicao = i;
        }
    }
    printf("%d\n%d\n", maior, posicao);

    return 0;
}