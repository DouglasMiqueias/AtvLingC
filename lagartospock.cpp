#include <bits/stdc++.h>
using namespace std;

string quemGanhou(string a, string b) {
    if (a == b) {
        return "empate";
    } else if ((a == "tesoura" && (b == "papel" || b == "lagarto")) ||
     (a == "papel" && (b == "pedra" || b == "spock")) ||
     (a == "pedra" && (b == "lagarto" || b == "tesoura")) ||
     (a == "lagarto" && (b == "spock" || b == "papel")) ||
     (a == "spock" && (b == "tesoura" || b == "pedra")))
     {
        return "rajesh";
     }else
    // Adicione outras condições aqui posteriormente
    return "sheldon"; // Essa linha é um placeholder para os casos restantes
}

int main() {
    int n;
    string rajesh, sheldon;

    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> rajesh >> sheldon;
        string resultado = quemGanhou(rajesh, sheldon);
        cout << resultado << endl;
    }

    return 0;
}
