#include<bits/stdc++.h>
using namespace std;

string animal(string v, string especie, string alimentacao)
{
    if(v == "vertebrado" && especie == "ave" && alimentacao == "carnivoro") return "aguia";
    else if(v == "vertebrado" && especie == "ave" && alimentacao == "onivoro") return "pomba";
    else if(v == "vertebrado" && especie == "mamifero" && alimentacao == "onivoro") return "homem";
    else if(v == "vertebrado" && especie == "mamifero" && alimentacao == "herbivoro") return "vaca";
    else if(v == "invertebrado" && especie == "inseto" && alimentacao == "hematofago") return "pulga";
    else if(v == "invertebrado" && especie == "inseto" && alimentacao == "herbivoro") return "lagarta";
    else if(v == "invertebrado" && especie == "anelideo" && alimentacao == "hematofago") return "sanguessuga";
    else if(v == "invertebrado" && especie == "anelideo" && alimentacao == "onivoro") return "minhoca";
}
int main()
{
    string v, especie, alimentacao;

    cin >> v >> especie >> alimentacao;

    cout << animal(v, especie, alimentacao) << endl;


}
