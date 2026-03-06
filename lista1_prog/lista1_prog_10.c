#include <stdio.h>

int main(){
    float vp, p, t;
    printf("Informe o valor do produto: R$");
    scanf("%f", &p);
    printf("Informe o valor a ser pago: R$");
    scanf("%f", &vp);

    t = vp - p;
    printf("O valor do troco e: R$%.2f\n", t); //pesquisei como reduzir casas decimais
    return 0;
}