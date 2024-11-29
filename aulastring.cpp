#include<bits/stdc++.h>
using namespace std;

int main()
{
    char str[100];
    char tmp[100];

    scanf("%[^\n]", tmp);  // escrever até que NAO seja digitado um \n (ou qualquer outro valor que você especificar)
    scanf("%[a-z]", str); // MOSTRAR SÓ MINUSCULAS
    scanf("%[0-9]", tmp);  // numeros
    cout << tmp;

    // strlen(str) - funcao usada para ver onde a string acaba
    //strcmp(str, abacate) - funcao usada oara comparar strings ---- Mostra a quantidade de diferenças entre uma string e outra-- antes ou dps no alfabeto;
    // strcpy(tmp, str); == tmp = str; ----> printf("%s", tmp);
}
