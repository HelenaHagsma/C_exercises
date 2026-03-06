#include <stdio.h>
#include <math.h>

int main(){
    int v, quadrado, cubo;
    printf("Informe um numero: ");
    scanf("%d", &v);

    quadrado = pow(v, 2);
    cubo = pow(v, 3);
    printf("O quadrado de %d e: %d\n", v, quadrado);
    printf("O cubo de %d e: %d", v, cubo);
    return 0;
}