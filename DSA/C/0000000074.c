#include <stdio.h>
#include <stdlib.h>

void ImprimeInt(const int *p)
{
    if (p != NULL)
        printf("%d", (void *)(*p));
    return;
}

void main()
{

    int *p = NULL;
    int x;
    scanf("%d", &x);
    p = &x;
    ImprimeInt(p);

    return;
}