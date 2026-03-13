#include <stdio.h>

int main(){
    float sal, vt;
    int cv;
    printf("Informe quantos carros voce vendeu no mes: ");
    scanf("%d", &cv);
    printf("Informe o valor total das suas vendas mensais: ");
    scanf("%f", &vt);

    sal = (1621*2) + (150*cv) + (0.05*vt);
    
    printf("Seu salario final e: R$%.2f", sal);
    return 0;
}