#include <stdio.h>

int main(){
    float cprod, ctransp, imp, ml, pf;
    printf("Informe o custo de producao do produto (em R$): ");
    scanf("%f", &cprod);
    printf("Informe o custo de transporte do produto (em R$): ");
    scanf("%f", &ctransp);
    printf("Informe a taxa de impostos do produto (em porcentagem): ");
    scanf("%f", &imp);
    printf("Informe a margem de lucro do produto (em porcentagem): ");
    scanf("%f", &ml);
    
    pf = cprod + (cprod*(imp/100)) + (cprod * (ml/100)) + ctransp;
    
    printf("O preco final do produto e: R$%.2f\n", pf);
    return 0;
}