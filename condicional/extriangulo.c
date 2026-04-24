#include <stdio.h>

int main(){
    float a, b, c;
    printf("Informe os lados do triangulo: ");
    scanf("%f %f %f", &a, &b, &c);

    if(a<b+c && b<a+c && c<a+b){
        printf("Pode formar um triangulo!\n");
        if(a==b && a==c){
            printf("Equilatero");
        }
        else if(a==b|| a==c|| b==c){
            printf("Isosceles");
        }else{
            printf("Escaleno");
        }
    }

    return 0;
}