#include <stdio.h>

int main(){
    float tf, tc;
    printf("Informe a temperatura em Fahrenheit: ");
    scanf("%f", &tf);
    
    tc = (tf - 32) * (5.0/9.0);
    
    printf("A temperatura em graus Celsius e: %.1f\n", tc);
    return 0;
}