#include <stdio.h>

int main(){
    float i, e, v;
    printf("Informe a idade: ");
    scanf("%f", &i);
    printf("Informe se e estudante (SIM = 1, NAO = 0): ");
    scanf("%f", &e);
    printf("Informe se e VIP (SIM = 1, NAO = 0): ");
    scanf("%f", &v);

    if(i > 65 || e == 1 || v == 1){
        printf("Paga meia entrada!");
    }else{
        printf("Paga entrada de valor integral.");
    }
    return 0;
}