#include <stdio.h>
#include <math.h>

int main(){
    float r, h, at, l, p, galoes; //r = raio, h = altura.
    printf("Pintura de tanques cilindricos. Calcule a tinta e o custo!\n\n");
    printf("Informe o raio do tanque cilindrico (em metros): ");
    scanf("%f", &r);
    printf("Preciso tambem da altura desse tanque (em metros): ");
    scanf("%f", &h);

    at = 2 * 3.1415 * r *(r + h); //area total do cilindro

    l = (at*2) / 3; //litros necessarios

    galoes = l/3.6; //galoes necessarios

    p = ceil(galoes)*60; //preço total

    printf("\n\nSerao necessarios %.0f galoes de tinta.\n", galoes);
    printf("O custo total da pintura e: R$%.2f\n", p);
    return 0;
}