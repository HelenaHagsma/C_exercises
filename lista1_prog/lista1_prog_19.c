#include <stdio.h>

int main() {
    int n;
    int uni, dez, cen, soma;

    printf("Digite um numero inteiro positivo menor que 1000: ");
    scanf("%d", &n);

    uni = n % 10;
    dez = (n / 10) % 10; //ultimo digito da dezena
    cen = n / 100; //ultimo digito da centena

    soma = uni + dez + cen;

    printf("A soma dos digitos e: %d\n", soma);

    return 0;
}