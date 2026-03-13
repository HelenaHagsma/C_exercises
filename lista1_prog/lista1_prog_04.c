#include <stdio.h>

int main(){
    float v1, v2, v3, vol;
    printf("Informe a largura da caixa: ");
    scanf("%f", &v1);
    printf("Informe a altura da caixa: ");
    scanf("%f", &v2);
    printf("Informe o comprimento da caixa: ");
    scanf("%f", &v3);

    vol = v1 * v2 * v3;
    
    printf("O volume da caixa e: %f\n", vol);
    return 0;
}