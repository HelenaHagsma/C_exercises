#include <stdio.h>

int main(){
    float a, b, c, media;
    printf("Informe a nota da primeira prova: ");
    scanf("%f", &a);
    printf("Informe a nota da segunda prova: ");
    scanf("%f", &b);
    printf("Informe a nota da terceira prova: ");
    scanf("%f", &c);

    media = ((a*2)+(b*4)+(c*6))/12;
    
    printf("A media desse aluno e: %.2f\n", media);
    return 0;
}