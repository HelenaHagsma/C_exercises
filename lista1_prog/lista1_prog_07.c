#include <stdio.h>

int main(){
    float p, t, pa;
    printf("Informe o valor da prestacao: ");
    scanf("%f", &p);
    printf("Informe a taxa de juros: ");
    scanf("%f", &t);

    pa = p+ (p*t/100);
    
    printf("O valor da prestacao atrasada e: %f\n",pa);
    return 0;
}