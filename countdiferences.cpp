#include <bits/stdc++.h>
using namespace std;

// Função para contar o número de caracteres diferentes entre duas strings
int countDifferences(char word[], const char correct[]) {
    int errors = 0;
    int len = strlen(word);
    for (int i = 0; i < len; i++) {
        if (word[i] != correct[i]) {
            errors++;
        }
    }
    return errors;
}

int main() {
    int n;
    cin >> n;
    char word[100];
    char one[100] = "one", two[100] = "two", three[100] = "three";

    for(int i = 0; i < n; i++) {
        cin >> word;

        // Contando os erros em relação a cada palavra
        int errorsOne = countDifferences(word, one);
        int errorsTwo = countDifferences(word, two);
        int errorsThree = countDifferences(word, three);

        if (errorsOne <= 1) {
            cout << "1" << endl;
        } else if (errorsTwo <= 1) {
            cout << "2" << endl;
        } else if (errorsThree <= 1) {
            cout << "3" << endl;
        }
    }

    return 0;
}
