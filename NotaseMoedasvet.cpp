#include<bits/stdc++.h>
using namespace std;

int main()
{
    double N;
    double notas[] = {100.00,50.00,20.00,10.00,5.00,2.00};
    double moedas[] = {1.00,0.50,0.25,0.10,0.05,0.01};
    int qtdmoedas [6] = {0};
    int qtdnotas [6] = {0};

    cin >> N;
    cout << "NOTAS:" << endl;

    for (int i = 0; i < 6; i++)
    {
        qtdnotas[i] = N/notas[i];
        N= fmod(N,notas[i]); // fmod para operar resto com numeros de ponto flutuante

        cout << qtdnotas[i] << " nota(s) de R$ " << fixed << setprecision(2) << notas[i]<< endl;
        //Uso de fixed e setprecision(2): Garantir que todos os valores de moedas sejam exibidos com duas casas decimais.
    }
    cout << "MOEDAS:" << endl;
     for (int i = 0; i < 6; i++)
    {
        qtdmoedas[i] = N/moedas[i];
        N= fmod(N,moedas[i]);

        cout << qtdmoedas[i] << " moeda(s) de R$ " << fixed << setprecision(2) <<moedas[i] <<endl;
    }
    return 0;
}
