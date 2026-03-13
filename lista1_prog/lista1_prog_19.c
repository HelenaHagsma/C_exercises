#include <stdio.h>

int main() {
    int n, uni, dez, cen, soma;
    printf("Digite um numero inteiro positivo menor que 1000: ");
    scanf("%d", &n);

    uni = n % 10;
    dez = (n / 10) % 10; 
    cen = n / 100; 
    soma = uni + dez + cen;
    
    printf("A soma dos digitos %d + %d + %d e: %d\n",cen, dez, uni, soma);
    return 0;
}