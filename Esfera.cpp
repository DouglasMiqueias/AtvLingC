#include <stdio.h>

//Fa�a um programa que calcule e mostre o volume de uma esfera sendo fornecido
//o valor de seu raio (R). A f�rmula para calcular o volume �: (4/3) * pi * R3.
//Considere (atribua) para pi o valor 3.14159.

int main() {
 double R,n=3.14159;
 scanf("%lf", &R);
 R = (4.0/3)*n*R*R*R;
 printf("VOLUME = %.3lf\n", R);
    return 0;
}
