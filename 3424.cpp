#include <iostream>
#include <string>
using namespace std;

int main() {
    int N;
    cin >> N;
    string s;
    cin >> s;

    int count_a = 0;
    int i = 0;

    while (i < N) {
        int j = i;
        // Encontrar um trecho monótono maximal
        while (j < N && s[j] == s[i]) {
            j++;
        }
        // Verificar se é não-trivial e se os caracteres são 'a'
        if ((j - i) > 1 && s[i] == 'a') {
            count_a += (j - i);
        }
        i = j;
    }

    cout << count_a << endl;

    return 0;
}
