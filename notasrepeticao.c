#include<stdio.h>

int main()
{
    double nota, media, soma = 0;
    int aux = 0;

    while(aux<2)
    {
    scanf("%lf", &nota);

    if(nota>10 || nota<0)
    {
        printf("nota invalida\n");
    }else{
        soma += nota;
        aux++; // daora
    }
    }
        media = soma/2;
        printf("MEDIA = %.1lf\n", media);
        aux++;

        return 0;
    }

