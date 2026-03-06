#include <stdio.h>

int main(){
    float vd, ciof, siof, tc, iof;
    printf("Informe o valor em dolares: ");
    scanf("%f", &vd);
    printf("Informe a taxa de cambio do dia: ");
    scanf("%f", &tc);

    siof = vd * tc;
    iof = siof * 0.0638;
    ciof = siof + iof;

    printf("O valor da compra sem IOF e: R$%.2f\n", siof);
    printf("O valor do IOF e: R$%.2f\n", iof);
    printf("O valor da compra com IOF e: R$%.2f\n", ciof);
    return 0;
}