#include <stdio.h>
#include <stdlib.h>

struct vetor
{
    float x, y, z;
};

int main()
{
    printf("SOMADOR DE VETOR TRIDEMENSIONAL\n");
    struct vetor v1, v2;
    printf("Digite os dados do Vetor V1\n");
    printf("X:");
    scanf("%f", &v1.x);
    printf("Y:");
    scanf("%f", &v1.y);
    printf("Z:");
    scanf("%f", &v1.z);
    printf("Digite os dados do Vetor V2\n");
    printf("X:");
    scanf("%f", &v2.x);
    printf("Y:");
    scanf("%f", &v2.y);
    printf("Z:");
    scanf("%f", &v2.z);
    struct vetor v3;
    v3.x = v1.x + v2.x;
    v3.y = v1.y + v2.y;
    v3.z = v1.z + v2.z;
    printf("Vetor resultado:\n");
    printf("%f\n", v3.x);
    printf("%f\n", v3.y);
    printf("%f\n", v3.z);
    return 0;
}