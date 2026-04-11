#include <stdio.h>

int main(){
    float d;
    printf("Informe a distância (cm): ");
    scanf("%f", &d);

    if(d <= 20){
        printf("Perigo de colisao!");
    }
    return 0;
}