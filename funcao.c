#include<stdio.h>
#include<stdlib.h>// para usar o system("cls")(limpa a tela no windows);
#include <windows.h> // Para usar Sleep()

int subtrair(double a, double b)
{
    double c = a - b;
    printf("%.2lf\n \n", c);
}
int somar(double a, double b)
{
    double c = a + b;
    printf("%.2lf \n \n", c);
}
int multiplicar(double a, double b )
{
    double c = a * b;
    printf("%.2lf\n \n", c);
}
int dividir(double a, double b)
{
    double c = a / b;
    printf("%.2lf\n \n", c);

}
int potencia(double a, double b)
{
    double c = a * a;
    printf("%.2lf ^2 = %.2lf\n", a, c);
    c = b * b;
    printf("%.2lf ^2 = %.2lf\n", b, c);


}
int menu()
{
    int opcao, interruptor=1;
    do{
    double a, b, c;
    printf(" Digite dois valores :\n");
    scanf("\n %lf \n %lf", &a, &b );
    printf("Qual operacao voce deseja realizar?\n \n");
    Sleep(3000);

    printf(" _________________________\n");
    printf("| 1- Somar               |\n");
    printf("| 2- Subtrair            |\n");
    printf("| 3- Dividir             |\n");
    printf("| 4- Multiplicar         |\n");
    printf("| 5- Potencia            |\n");
    printf("|________________________|\n");
    scanf("%d", &opcao);
    system("cls"); // limpa()
    switch (opcao)
    {
    case 1:
        somar(a, b);
        break;
    case 2:
        subtrair(a, b);
        Sleep(2000);
        break;
    case 3:
        dividir(a, b);
        break;
    case 4:
        multiplicar(a, b);
        break;
    case 5:
        potencia(a, b);
        break;
    }
    } while(interruptor == 1);

}
int main()
{
    menu();
    return 0;
}
