#include <stdio.h>

int main(){
    float idade;
    printf("Informe a idade: ");
    scanf("%f", &idade);

    if(idade >= 18){
        printf("Maior de idade.");
    }
    return 0;
}