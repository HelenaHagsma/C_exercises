#include <stdio.h>

int main(){
    float p, esc;
    printf("Informe o valor do pixel: ");
    scanf("%f", &p);

    // pixel 0 = -1, pixel 255 = 1 | b = -1, a = 2/255 (1 = 255a - 1)
    // esc = a * pixel -1
    esc =  2.0/255.0 * p - 1;
    
    printf("O valor convertido e: %.2f", esc);
    return 0;
}