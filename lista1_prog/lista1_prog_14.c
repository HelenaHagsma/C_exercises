#include <stdio.h>

int main(){
    float n1, n2, n3, n4, media;
    printf("Informe o primeiro numero: ");
    scanf("%f", &n1);
    printf("Informe o segundo numero: ");
    scanf("%f", &n2);
    printf("Informe o terceiro numero: ");
    scanf("%f", &n3);
    printf("Informe o quarto numero: ");
    scanf("%f", &n4);

    media = (n1+n2+n3+n4)/4;
    printf("A media entre os quatro numeros e: %.2f\n", media);
    return 0;
}