#include <stdio.h>

int main(){
    int dia;
    printf("Informe o dia (1 ao 7): ");
    scanf("%d", &dia);

    if(dia==1 || dia==7){
        printf("final de semana.");
    }
    else if(dia>=2 && dia<=6){
        printf("dia util.");
    }else{
        printf("invalido.");
    }
    return 0;
}