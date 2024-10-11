#include<stdio.h>
#define COMISSAO 0.15

int main()
{
    char nome[50];
    double salario, vendas, total;

    scanf("%s", &nome);
    scanf("%lf", &salario);
    scanf("%lf", &vendas);
    total = salario +(vendas * COMISSAO) ;

    printf("TOTAL = R$ %.2lf\n", total);
    return 0;
}
