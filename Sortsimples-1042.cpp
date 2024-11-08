#include<bits/stdc++.h>
using namespace std;
int main()
{
    int original[3];
    int crescente[3];

    for(int i = 0;i < 3; i++)
    {
        cin >> original[i] ;
        crescente[i] = original[i];
    }

    sort(crescente,crescente + 3);

    for(int i = 0; i < 3; i++)
    {
        cout << crescente[i] << endl;
    }
    cout << endl;
    for(int i = 0; i < 3; i++)
    {
        cout << original[i] << endl;
    }



}
