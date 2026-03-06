#include <stdio.h>
#include <math.h>

int main(){
    float r, a, vol;
    printf("Informe o raio da lata: ");
    scanf("%f", &r);
    printf("Informe a altura da lata: ");
    scanf("%f", &a);

    vol = 3.1415 * pow(r, 2) * a;
    printf("O volume da lata e: %f\n", vol);
    return 0;
}