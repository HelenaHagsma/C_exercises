#include <stdio.h>

int main(){
    float idade;
    printf("Informe a idade: ");
    scanf("%f", &idade);

    if(idade >= 16){
        printf("Acesso liberado.");
    }
    else{
        printf("Acesso bloqueado.");
    }
    return 0;
}