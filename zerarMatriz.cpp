#include <iostream>
using namespace std;

void zerarMatriz(int matriz[][100], int N, int M) {
    int linhas[100] = {0};
    int colunas[100] = {0};

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if (matriz[i][j] == 0)
            {
                linhas[i] = 1;
                colunas[j] = 1;
            }
        }
    }

    for (int i = 0; i < N; i++)
    {
        if (linhas[i] == 1) {
            for (int j = 0; j < M; j++)
            {
                matriz[i][j] = 0;
            }
        }
    }

    for (int j = 0; j < M; j++)
    {
        if (colunas[j] == 1)
        {
            for (int i = 0; i < N; i++)
            {
                matriz[i][j] = 0;
            }
        }
    }
}

int main() {
    int N, M;
    cin >> N >> M;

    int matriz[100][100];

    for (int i = 0; i < N; i++)
        {
        for (int j = 0; j < M; j++)
        {
            cin >> matriz[i][j];
        }
    }

    zerarMatriz(matriz, N, M);

    for (int i = 0; i < N; i++)
        {
        for (int j = 0; j < M; j++)
        {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
