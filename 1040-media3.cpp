#include<bits/stdc++.h>
using namespace std;
#define PESO1 2
#define PESO2 3
#define PESO3 4
#define PESO4 1
int main()
{
    double n1,n2,n3,n4, media;

    cin >> n1 >> n2 >> n3 >> n4;

    media = (n1 * PESO1 + n2 * PESO2 + n3 * PESO3 + n4*PESO4) / (PESO1 + PESO2 + PESO3 + PESO4);

    cout << fixed << setprecision(1);
    cout << "Media: " << media << endl;

    if(media > 7.0)
    {
        cout << "Aluno aprovado." << endl;

    }else if(media < 5.0)
    {
        cout << "Aluno reprovado." << endl;

    }else if(media >= 5.0 && media <= 6.9)
    {
        double notaexame, mediafinal;
        cout << "Aluno em exame." << endl;
        cin >> notaexame;
        cout << "Nota do exame: " << notaexame << endl;
        mediafinal = (media + notaexame)/2;

        if(mediafinal >= 5.0)
        {
            cout << "Aluno aprovado." << endl;
            cout << "Media final: " << mediafinal << endl;
        }else{
            cout << "Aluno reprovado." << endl;
            cout << "Media final: " << mediafinal << endl;
        }
    }

}
