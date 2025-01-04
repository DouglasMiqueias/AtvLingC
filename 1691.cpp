#include <iostream>
#include <cmath>
using namespace std;

// Função para verificar se um ano é bissexto
bool ehBissexto(int ano) {
    return (ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0);
}

// Função para calcular os dias em um mês específico de um ano específico
int diasNoMes(int ano, int mes) {
    if (mes == 2) {
        return ehBissexto(ano) ? 29 : 28;
    }
    if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {
        return 30;
    }
    return 31;
}

// Função para calcular os dias desde uma data de referência (01/01/1970)
int diasDesdeReferencia(int ano, int mes, int dia) {
    int dias = 0;

    for (int i = 1970; i < ano; i++) {
        dias += ehBissexto(i) ? 366 : 365;
    }

    for (int i = 1; i < mes; i++) {
        dias += diasNoMes(ano, i);
    }

    dias += dia - 1;

    return dias;
}

int main() {
    int N;
    cin >> N;
    while (N--) {
        int ano1, mes1, dia1;
        int ano2, mes2, dia2;
        char separador;
        cin >> ano1 >> separador >> mes1 >> separador >> dia1;
        cin >> ano2 >> separador >> mes2 >> separador >> dia2;

        int dias1 = diasDesdeReferencia(ano1, mes1, dia1);
        int dias2 = diasDesdeReferencia(ano2, mes2, dia2);

        cout << abs(dias2 - dias1) << endl;
    }
    return 0;
}
