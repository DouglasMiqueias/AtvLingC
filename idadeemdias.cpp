//Leia um valor inteiro correspondente � idade de uma pessoa em dias e informe-a em anos, meses e dias

//Obs.: apenas para facilitar o c�lculo, considere todo ano com 365 dias e todo m�s com 30 dias.
//Nos casos de teste nunca haver� uma situa��o que permite 12 meses e alguns dias, como 360, 363 ou 364.
#include <stdio.h>

int main()
{
    int idade, anos, meses, dias;

    scanf("%d", &idade);
    anos = idade/365;
    meses = (idade%365)/30;
    dias = (anos*365+meses*30) - idade;
    dias = dias*(-1);
    printf("%d ano(s)\n", anos);
    printf("%d mes(es)\n", meses);
    printf("%d dia(s)\n", dias);

    return 0;
}
