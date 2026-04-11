#include <stdio.h>

int main(){
    float nota;
    printf("Informe a nota: ");
    scanf("%f", &nota);

    if(nota >= 7.0){
        printf("Aprovado.");
    }
    else{
        printf("Reprovado.");
    }
    return 0;
}