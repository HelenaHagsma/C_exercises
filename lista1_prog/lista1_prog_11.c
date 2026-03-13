#include <stdio.h>

int main(){
    int n1, n2, soma, sub, mult, div;
    printf("Informe o primeiro numero: ");
    scanf("%d", &n1);
    printf("Informe o segundo numero: ");
    scanf("%d", &n2);

    soma = n1 + n2;
    sub = n1 - n2;
    mult = n1 * n2;
    div = n1 / n2;
    
    printf("Segue o resultado das operacoes realizadas:\n . Soma: %d\n . Subtracao: %d\n . Multiplicacao: %d\n . Divisao: %d\n", soma, sub, mult, div);
    return 0;
}