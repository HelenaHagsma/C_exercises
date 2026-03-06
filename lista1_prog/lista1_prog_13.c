#include <stdio.h>

int main(){
    float p, mm;
    printf("Informe a quantidade de chuva em polegadas: ");
    scanf("%f", &p);

    mm = 25.4 * p;
    printf("A quantidade em milimetros(mm) e: %f mm.\n", mm);
    return 0;
}