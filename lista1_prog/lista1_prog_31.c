#include <stdio.h>

int main(){
    float c, e;
    printf("Informe a temperatura em Celsius: ");
    scanf("%f", &c);

    e = (1.3 * c) + 20;
    
    printf("A conversao de %.2f graus Celsius para Estevam e: %.2f", c, e);
    return 0;
}