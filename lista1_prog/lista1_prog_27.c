#include <stdio.h>

int main(){
    float s, m, h, d;
    printf("Informe o tempo em segundos: ");
    scanf("%f", &s);

    m = s/60;
    h = s/3600;
    d = s/86.400;

    printf("Minutos: %.2f\nHoras: %.2f\nDias: %.2f\n", m, h, d);
    return 0;
}