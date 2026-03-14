#include <stdio.h>

int main() {
    float g, m, s, r;
    printf("Digite os graus: ");
    scanf("%f", &g);
    printf("Digite os minutos: ");
    scanf("%f", &m);
    printf("Digite os segundos: ");
    scanf("%f", &s);

    g = g + ((m + s / 60) /60);

    r = 2 * 3.1415 * g / 360;

    printf("O angulo em radianos e: %.2f\n", r);
    return 0;
}
