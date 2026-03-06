#include <stdio.h>

int main(){
    float area, b, h;
    printf("Informe a base do triangulo: ");
    scanf("%f", &b);
    printf("Informe a altura do triangulo: ");
    scanf("%f", &h);

    area = (b * h) / 2;

    printf("A area do triangulo e: %f\n", area);
    return 0;
}