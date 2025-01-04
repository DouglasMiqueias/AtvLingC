#include <iostream>
#include <set>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    set<int> figurinhasCompradas;
    for (int i = 0; i < M; ++i) {
        int figurinha;
        cin >> figurinha;
        figurinhasCompradas.insert(figurinha);
    }

    int figurinhasFaltando = N - figurinhasCompradas.size();
    cout << figurinhasFaltando << endl;

    return 0;
}
