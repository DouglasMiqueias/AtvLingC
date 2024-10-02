#include<stdio.h>

int main()
{
    int al = 0, gas = 0, dies = 0, fim = 0, aux = 0;
    printf("1-Alcool:\n2Gasolina:\n3Diesel:\nFim");
    while(fim == 0)
    {
        scanf("%d", &aux);
        if(aux == 1)
        {
            al++;
        }
        if(aux == 2)
        {
            gas++;
        }
        if(aux == 3)
        {
            dies++;
        }
        if(aux == 4)
        {
            fim++;
            printf("MUITO OBRIGADO\n");
            printf("Alcool: %d\n", al);
            printf("Gasolina: %d\n" , gas);
            printf("Diesel: %d\n",dies);

            return 0;
        }
    }
}
