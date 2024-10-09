#include<stdio.h>

int main()
{
    int n, i;
    double resultado = 0, a, b, c;

    scanf("%d", &n); 
    for (i = 0; i < n; i++) // while(n--)
    {
        scanf("%lf %lf %lf", &a, &b, &c);

        resultado = (a * 2 + b * 3 + c * 5) / 10;

        printf("%.1lf\n", resultado);
    }

    return 0;
}
