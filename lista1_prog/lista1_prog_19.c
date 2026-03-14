#include <stdio.h>

int main() {
    int n, uni, dez, cen, soma;
    printf("Digite um numero inteiro positivo menor que 1000: ");
    scanf("%d", &n);

    cen = n / 100;
    dez = (n % 100)/10;
    uni = (n % 10); 

    soma = uni + dez + cen;
    
    printf("A soma dos digitos %d + %d + %d e: %d\n",cen, dez, uni, soma);
    return 0;
}
