#include <stdio.h>

int main(){
    float dist, combust, cm;
    printf("Informe a distancia total percorrida pelo veiculo: ");
    scanf("%f", &dist);
    printf("Informe o total de combustivel gasto: ");
    scanf("%f", &combust);

    cm = dist / combust;
    printf("O consumo medio e: %f km/L \n", cm); 
    return 0;
}