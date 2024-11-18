#include <bits/stdc++.h>
using namespace std;

int main() {
    double a, b, c;
    cin >> a >> b >> c;

    double lados[] = {a, b, c};
    sort(lados, lados + 3, greater<double>());  // Ordena em ordem decrescente

    a = lados[0];  // Maior lado
    b = lados[1]; 
    c = lados[2];

    if (a >= b + c) {
        cout << "NAO FORMA TRIANGULO" << endl;
    } else {
        if (pow(a, 2) == pow(b, 2) + pow(c, 2)) {
            cout << "TRIANGULO RETANGULO" << endl;
        }
        if (pow(a, 2) > pow(b, 2) + pow(c, 2)) {
            cout << "TRIANGULO OBTUSANGULO" << endl;
        }
        if (pow(a, 2) < pow(b, 2) + pow(c, 2)) {
            cout << "TRIANGULO ACUTANGULO" << endl;
        }
        if (a == b && b == c) {
            cout << "TRIANGULO EQUILATERO" << endl;
        }
        if (a == b || b == c || a == c) {
            cout << "TRIANGULO ISOSCELES" << endl;
        }
    }

    return 0;
}
