#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int A, V, teste = 1;

    while (cin >> A >> V && (A != 0 || V != 0)) {
        vector<int> trafego(A + 1, 0); // Vetor para armazenar o tráfego de cada aeroporto

        for (int i = 0; i < V; ++i) {
            int X, Y;
            cin >> X >> Y;
            trafego[X]++;
            trafego[Y]++;
        }

        int maxTrafego = *max_element(trafego.begin(), trafego.end());

        cout << "Teste " << teste << endl;
        for (int i = 1; i <= A; ++i) {
            if (trafego[i] == maxTrafego) {
                cout << i << " ";
            }
        }
        cout << endl << endl;

        teste++;
    }

    return 0;
}
