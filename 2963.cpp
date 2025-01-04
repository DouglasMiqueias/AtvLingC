#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    vector<int> votos(N);
    for (int i = 0; i < N; ++i) {
        cin >> votos[i];
    }

    int maxVotos = votos[0]; // O número de votos do primeiro candidato (Carlos)
    bool eleito = true;

    for (int i = 1; i < N; ++i) {
        if (votos[i] > maxVotos) {
            eleito = false;
            break;
        }
    }

    if (eleito) {
        cout << "S" << endl;
    } else {
        cout << "N" << endl;
    }

    return 0;
}
