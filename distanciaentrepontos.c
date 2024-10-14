#include <stdio.h>
#include <math.h>

int main() {
    double x1, x2, y1, y2, resultado;

    scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);

    // Calcula a distância entre os pontos (x1, y1) e (x2, y2)
    resultado = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1)); // sqrt(numero) =  raiz quadrada

    // Imprime o resultado com 4 casas decimais
    printf("%.4lf\n", resultado);
    return 0;
}
