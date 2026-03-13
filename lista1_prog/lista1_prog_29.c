#include <stdio.h>

int main() {
    int graus, m, s;
    double gd, rad;
    printf("Digite os graus: ");
    scanf("%d", &graus);
    printf("Digite os minutos: ");
    scanf("%d", &m);
    printf("Digite os segundos: ");
    scanf("%d", &s);

    gd = graus + m / 60 + s / 3600;

    rad = gd * 3.1415 / 180;

    printf("O angulo em radianos e: %.2f\n", rad);
    return 0;
}