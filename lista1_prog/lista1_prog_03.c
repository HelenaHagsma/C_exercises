#include <stdio.h>

int main(){
    int nA, nB;
    printf("Informe um numero qualquer: ");
    scanf("%d", &nA);
    printf("Informe outro valor qualquer: ");
    scanf("%d", &nB);

    printf("Valores invertidos: %d e %d", nB, nA);
    return 0;
}