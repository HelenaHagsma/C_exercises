#include <stdio.h>

int main(){
    int n;
    printf("Informe um valor: ");
    scanf("%d", &n);

    if(n % 2 == 0){
        printf("Par");
    }
    else{
        printf("Impar");
    }
    return 0;
}