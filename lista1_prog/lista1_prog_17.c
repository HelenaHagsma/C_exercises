#include <stdio.h>

int main(){
    int d, m, mes, dia, mp, dp;
    printf("Informe o dia: ");
    scanf("%d", &d);
    printf("Informe o mes (ex: 8 (agosto)): ");
    scanf("%d", &m);

    dia = 30 - d;
    mes = (m * 30) - dia;

    printf("Se passaram %d dias desde o inicio do ano.", mes);
    return 0;
}