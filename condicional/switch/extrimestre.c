#include <stdio.h>

int main(){
    int mes;
    printf("Informe o mes: ");
    scanf("%d", &mes);
    switch(mes){
        case 1: case 2: case 3: printf("primeiro");break;
        case 4: case 5: case 6: printf("segundo");break;
        case 7: case 8: case 9: printf("terceiro");break;
        case 10: case 11: case 12: printf("quarto");break;
        default: printf("invalido"); break;
    }
    return 0;
}