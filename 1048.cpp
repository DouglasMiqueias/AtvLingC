#include<bits/stdc++.h>
using namespace std;

int main()
{
    double salario,salarionovo, reajuste;

    cin >> salario;

    cout << fixed << setprecision(2);

    if(salario <= 400.00)
    {
        reajuste = 0.15;
        salarionovo = salario + (salario * reajuste);

        cout << "Novo salario: " << salarionovo << endl;
        cout << "Reajuste ganho: " << salario * reajuste << endl;
        cout << fixed << setprecision(0) <<"Em percentual: " << reajuste * 100 << " %" << endl;

    }

     if(salario > 400.00 && salario <= 800.00)
    {
        reajuste = 0.12;
        salarionovo = salario + (salario * reajuste);

        cout << "Novo salario: " << salarionovo << endl;
        cout << "Reajuste ganho: " << salario * reajuste << endl;
        cout << fixed << setprecision(0) <<"Em percentual: " << reajuste * 100 << " %" << endl;

    }
     if(salario > 800.00 && salario <= 1200.00)
    {
        reajuste = 0.10;
        salarionovo = salario + (salario * reajuste);

        cout << "Novo salario: " << salarionovo << endl;
        cout << "Reajuste ganho: " << salario * reajuste << endl;
        cout << fixed << setprecision(0) <<"Em percentual: " << reajuste * 100 << " %" << endl;

    }
     if(salario > 1200.00 && salario <=2000.00)
    {
        reajuste = 0.07;
        salarionovo = salario + (salario * reajuste);

        cout << "Novo salario: " << salarionovo << endl;
        cout << "Reajuste ganho: " << salario * reajuste << endl;
        cout << fixed << setprecision(0) <<"Em percentual: " << reajuste * 100 << " %" << endl;

    }
     if(salario > 2000.00)
    {
        reajuste = 0.04;
        salarionovo = salario + (salario * reajuste);

        cout << "Novo salario: " << salarionovo << endl;
        cout << "Reajuste ganho: " << salario * reajuste << endl;
        cout << fixed << setprecision(0) <<"Em percentual: " << reajuste * 100 << " %" << endl;

    }

}
