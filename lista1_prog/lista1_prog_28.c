#include <stdio.h>
#include <math.h>

int main(){
    float dias, a, m;
    printf("Informe sua idade em dias: ");
    scanf("%f", &dias);

    a = dias/365;
    m = a * 12;

    printf("Voce tem %.0f anos, desconsiderando anos bissextos.\nJa viveu %.0f meses e %.0f dias.", ceil(a), m, dias);
    return 0;
}