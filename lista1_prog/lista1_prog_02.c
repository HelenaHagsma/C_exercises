#include <stdio.h>

int main(){
    float v1, v2, media;
    printf("Informe o primeiro valor: ");
    scanf("%f", &v1);
    printf("Informe o segundo valor: ");
    scanf("%f", &v2);

    media = (v1+v2)/2;
    
    printf("A media e: %f\n", media);
    return 0;
}