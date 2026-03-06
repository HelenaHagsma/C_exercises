#include <stdio.h>
#include <math.h>

int main(){
    float a, b, c, d, ea, eb, ec;
    printf("Informe o valor de a: ");
    scanf("%f", &a);
    printf("Informe o valor de b: ");
    scanf("%f", &b);
    printf("Informe o valor de c: ");
    scanf("%f", &c);
    printf("Informe o valor de d: ");
    scanf("%f", &d);

    ea = ((b/(a+c)) + (4*a)) / ((d - (2*a)) / (3 + c));

    eb = (-b -(pow(b, 3)) - (4*a*c) + (2* (pow(a, 2)))) / (2*a) / (pow((b+1), 2));

    ec = (a /(pow(b, 2))) / ((2*a)-(3*b)) / (pow ((4 * (pow(a, 2)) - 3), 3));

    printf("Resultado das expressoes:\nexpressao a): %f\nexpressao b): %f\nexpressao c): %f\n", ea, eb, ec);
    return 0;
} //////pensar depois