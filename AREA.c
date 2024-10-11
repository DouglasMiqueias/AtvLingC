#include<stdio.h>
#define PI 3.14159
int main()
{
    double a, b, c, triangulo, circulo, trapezio, quadrado, retangulo;

    scanf("%lf %lf %lf", &a, &b, &c);

    triangulo = (a * c)/2 ; // AREA DO TRIAN = (BASE * ALTURA) / 2
    circulo = PI * (c*c); // AREA CIRCULO = PI * RAIO^2
    trapezio = (a + b) * c / 2; // AREA = (BASE1 + BASE2) * ALTURA / 2
    quadrado = b * b; // lado^2
    retangulo = a * b; // AREA = comprimento * largura

    printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n", triangulo, circulo, trapezio, quadrado, retangulo);

    return 0;
}
