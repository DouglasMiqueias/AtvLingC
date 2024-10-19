#include<stdio.h>
int main()
{
    int n, R, menor;
    scanf("%i", &n);

    int vet[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%i",&vet[i]);
    }
    for (int i = 1; i < n; i ++)
    {
        if(vet[i] < vet[i - 1])
        {
            printf("%i", i +1);
            return 0;
        }
    }

    printf("0");
    return 0;
}
