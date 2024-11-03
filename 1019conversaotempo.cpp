#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N, horas, minutos, segundos;
    cin >> N;
    horas =  N / 3600;
    N = N%3600;

    minutos = N / 60;
    segundos = N % 60;
    cout << horas << ":"<< minutos << ":" << segundos << endl;
}
