#include <stdio.h>

int main(){
    int dia;
    printf("Informe um dia: \n");
    printf("1 - DOMINGO\n");
    printf("2 - SEGUNDA\n");
    printf("3 - TERCA\n");
    printf("4 - QUARTA\n");
    printf("5 - QUINTA\n");
    printf("6 - SEXTA\n");
    printf("7 - SABADO\n");
    scanf("%d", &dia);
    
    switch (dia)
    {
    case 1:
        printf("Final de semana.");
        break;
    case 2:
        printf("Dia util.");
        break;
    case 3:
        printf("Dia util.");
        break;
    case 4:
        printf("Dia util.");
        break;
    case 5:
        printf("Dia util.");
        break;
    case 6:
        printf("Dia util.");
        break;
    case 7:
        printf("Final de semana.");
        break;
    
    default:
        printf("Invalido.");
        break;
    }
    return 0;
}