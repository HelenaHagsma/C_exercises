#include <stdio.h>

int main (){
    float t;
    printf("Informe a temperatura: ");
    scanf("%f", &t);

    if (t > 37.5){
        printf("Atencao! Paciente com febre.");
    }
    return 0;
}