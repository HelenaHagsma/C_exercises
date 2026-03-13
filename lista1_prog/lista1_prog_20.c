#include <stdio.h>

int main(){
    int valorcompra, valorpag, troco100, troco10, troco1, trocototal, valortroco;
    printf("informe o valor da compra: ");
    scanf("%d", &valorcompra);
    printf("Informe o valor pago: ");
    scanf("%d", &valorpag);

    valortroco = valorpag - valorcompra;

    troco100 = valortroco / 100;
    troco10 = (valortroco % 100) / 10;
    troco1 = (valortroco % 10) / 1;

    trocototal = troco100 + troco10 + troco1;
    printf("\nO valor da compra e: R$%.2d", valorcompra);
    printf("\nO valor do troco e: R$%.2d", valortroco);
    printf("\nA quantidade de notas para o troco sera: %d notas de R$100 | %d notas de R$10 | %d notas de R$1.", troco100, troco10, troco1);
    return 0;
}