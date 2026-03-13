#include <stdio.h>

int main(){
    float c, a, l, qnt, area, mat;
    printf("Informe o comprimento da caixa: ");
    scanf("%f", &c);
    printf("Informe a altura da caixa: ");
    scanf("%f", &a);
    printf("Informe a largura da caixa: ");
    scanf("%f", &l);
    printf("Informe a quantidade de caixas a serem produzidas: ");
    scanf("%f", &qnt);

    area = 2 * ((c*a)+(c*l)+(l*a));
    mat = (area * qnt) * 1.10;

    printf("Serao necessarios %.2f metros quadrados de material", mat);
    return 0;
}