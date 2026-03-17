#include <math.h>

int main(){
    double x1, x2, y1, y2, d, p1, p2;
    printf("Informe o primeiro ponto: ");
    scanf("%lf %lf", &x1, &y1);
    printf("Informe o segundo ponto: ");
    scanf("%lf %lf", &x2, &y2);

    p1 = pow(x2 - x1, 2);
    p2 = pow(y2 - y1, 2);
    d = sqrt(p1 + p2);
    
    printf("A distancia entre os dois pontos e: %.2lf", d);
    return 0;
}
