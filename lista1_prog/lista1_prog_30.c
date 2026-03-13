#include <stdio.h>

int main(){
    float p1, p2, d;
    printf("Informe o primeiro ponto: ");
    scanf("%f", &p1);
    printf("Informe o segundo ponto: ");
    scanf("%f", &p2);

    d = p1 - p2;
    
    printf("A distancia entre os dois pontos e: %.2f", d);
    return 0;
}