// https://judge.beecrowd.com/pt/problems/view/1079

#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        float a, b, c;
        scanf("%f", &a);
        scanf("%f", &b);
        scanf("%f", &c);
        float media = (a * 2 + b * 3 + c * 5) / (2 + 3 + 5);
        printf("%.1f\n", media);
    }

    return 0;
}