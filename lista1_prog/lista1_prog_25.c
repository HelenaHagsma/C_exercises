#include <stdio.h>
#include <math.h>

int main(){
    float co, ca, h;
    printf("Informe o valor do cateto oposto: ");
    scanf("%f", &co);
    printf("Informe o valor do cateto adjacente: ");
    scanf("%f", &ca);

    h = sqrt((pow(co, 2))+(pow(ca, 2)));
    
    printf("O valor da hipotenusa e: %.2f\n", h);
    return 0;
}