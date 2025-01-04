#include <iostream>
#include <string>
using namespace std;

// Função para verificar a validade do CPF
bool ehCPFValido(const string& cpf) {
    // Remove pontos e hífen do CPF
    string cpfNumeros = "";
    for (char c : cpf) {
        if (isdigit(c)) {
            cpfNumeros += c;
        }
    }

    // Verificação do tamanho do CPF após remover pontos e hífen
    if (cpfNumeros.size() != 11) {
        return false;
    }

    int soma1 = 0, soma2 = 0;

    // Calcula a soma para o primeiro dígito verificador (b1)
    for (int i = 0; i < 9; ++i) {
        int digito = cpfNumeros[i] - '0';
        soma1 += digito * (i + 1);
    }

    int b1 = soma1 % 11;
    if (b1 == 10) {
        b1 = 0;
    }

    // Calcula a soma para o segundo dígito verificador (b2)
    for (int i = 0; i < 9; ++i) {
        int digito = cpfNumeros[i] - '0';
        soma2 += digito * (9 - i);
    }

    int b2 = soma2 % 11;
    if (b2 == 10) {
        b2 = 0;
    }

    // Verifica se os dígitos verificadores calculados correspondem aos dígitos fornecidos no CPF
    return (b1 == cpfNumeros[9] - '0') && (b2 == cpfNumeros[10] - '0');
}

int main() {
    string cpf;
    
    // Lê CPFs até o fim da entrada
    while (cin >> cpf) {
        if (ehCPFValido(cpf)) {
            cout << "CPF valido" << endl;
        } else {
            cout << "CPF invalido" << endl;
        }
    }
    
    return 0;
}
