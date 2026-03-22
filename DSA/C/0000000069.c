// https://judge.beecrowd.com/pt/problems/view/1019

#include <stdio.h>

int main()
{

    int segundos;
    scanf("%d", &segundos);

    /*
    3600 SEGs = 1 Hour / 60 Minutes
    60 Segs = 1 Minute
    */

    int horas = segundos / 3600;
    int minutos = (segundos % 3600) / 60;
    segundos = (segundos % 3600) % 60;
    printf("%d:%d:%d\n", horas, minutos, segundos);

    return 0;
}