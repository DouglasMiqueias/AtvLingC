#include<stdio.h>

int main()
{
    int idade, aux = 0;
    double media, soma, cont = 0.0;

    while(aux == 0)
    {
        scanf("%d", &idade);
        if(idade>0)
        {
            soma +=idade;
            cont++;
        }else{
            aux++;
            media = soma / cont;
            printf("%.2lf\n", media);
        }
    }

    return 0;
}
