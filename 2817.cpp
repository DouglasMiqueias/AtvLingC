#include <iostream>
using namespace std;

int main() {
    int V, teste = 1;

    while (cin >> V && V != 0) {
        int notas50 = V / 50;
        V %= 50;
        int notas10 = V / 10;
        V %= 10;
        int notas5 = V / 5;
        V %= 5;
        int notas1 = V;

        cout << "Teste " << teste << endl;
        cout << notas50 << " " << notas10 << " " << notas5 << " " << notas1 << endl;
        cout << endl;

        teste++;
    }

    return 0;
}
