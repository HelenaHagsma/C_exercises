#include <stdio.h>

int main(){
    float m;
    int opcao;
    printf("Informe um valor em metros: ");
    scanf("%f", &m);
    printf("Digite: \n");
    printf("1 para quilometros\n");
    printf("2 para centimetros\n");
    printf("3 para decimetros\n");
    printf("4 para milimetros");
    scanf("%d", &opcao);

    switch(opcao){
        case 1:
            printf("%f metros = %f quilometros", m, m/1000);
        break;
        case 2:
            printf("%f metros = %f centimetros", m, m*100);
        break;
        case 3:
            printf("%f metros = %f decimetros", m, m*10);
        break;
        case 4:
            printf("%f metros = %f milimetros", m, m*1000);
        break;
        default:
            printf("Invalido.");
    }
        
    return 0;
}