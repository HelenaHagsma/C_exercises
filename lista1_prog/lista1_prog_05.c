#include <stdio.h>

int main(){
    int nc, f;
    printf("Informe o numero de cavalos no haras: ");
    scanf("%d", &nc);

    f = nc * 4;
    
    printf("O numero necessario de ferraduras e: %d\n", f);
    return 0;
}