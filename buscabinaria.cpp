//esse código lê um vetor de números, ordena e encontra um valor x a partir de busca binária
#include<bits/stdc++.h>
using namespace std;

int buscaBinaria(int v[], int n, int valor){
    int i = 0, f = n - 1;
    while(i <= f){
        int m = (i + f)/2;
        if(v[m] == valor){
            return m;
        }
        else if(v[m] > valor){
            f = m - 1;
        } 
        else{
            i = m + 1;
        }
    }
    return -1;
}

int main(){
    int n;
    cin >> n;
    int vet[n];
    for(int i=0; i<n; i++){
        cin >> vet[i];
    }
    sort(vet, vet+n);

    int x;
    cin >> x;

    int pos = buscaBinaria(vet, n, x);
    if(pos==-1) cout << "Nao encontrado\n";
    else cout << pos << endl;
}
