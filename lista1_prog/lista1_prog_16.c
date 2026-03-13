#include <stdio.h>

int main(){
    int idade, dv;
    printf("Informe a sua idade: ");
    scanf("%d", &idade);

    dv = (idade * 12) * 30;
    
    printf("Voce ja viveu %d dias!", dv);
    return 0;
}