#include <iostream>
using namespace std;

int main() {
    int N;
    int notas[] = {100, 50, 20, 10, 5, 2, 1}; // vet notas
    int qtdnotas[7] = {0}; // inicializando com zeros

    cin >> N;
    cout << N << endl;

    for(int i = 0; i < 7; i++) {
        qtdnotas[i] = N / notas[i];
        N %= notas[i];
    }

    for (int i = 0; i < 7; i++) {
        cout << qtdnotas[i] << " nota(s) de R$ " << notas[i] << ",00" << endl;
    }

    return 0;
}
