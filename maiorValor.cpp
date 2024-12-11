#include<bits/stdc++.h>
using namespace std;

int maiorValor(int x, int y)
{
    int maior;

    maior = abs(x + y + abs(x-y))/2;

    return maior;
}

int main()
{
    int x, y;

    cin >> x >> y;

    cout << "Maior = " << maiorValor(x, y) << endl;
    return 0;
}
