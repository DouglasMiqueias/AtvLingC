#include <iostream>
using namespace std;

int main() {
    int K;
    while (cin >> K && K != 0) {
        int N, M;
        cin >> N >> M;

        for (int i = 0; i < K; i++) {
            int X, Y;
            cin >> X >> Y;

            if (X == N || Y == M) {
                cout << "divisa" << endl;
            } else if (X > N && Y > M) {
                cout << "NE" << endl;  // Nlogônia do Nordeste
            } else if (X > N && Y < M) {
                cout << "SE" << endl;  // Nlogônia do Sudeste
            } else if (X < N && Y > M) {
                cout << "NO" << endl;  // Nlogônia do Noroeste
            } else if (X < N && Y < M) {
                cout << "SO" << endl;  // Nlogônia do Sudoeste
            }
        }
    }
    return 0;
}
