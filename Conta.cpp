#include<bits/stdc++.h>
using namespace std;

int main()
{
    int C, N;

    cin >> C;
    for(int i = 0; i < C; i++)
    {
        cin >> N;
        int resultado = 0;
        for(int j = 0; j < N; j++)
        {
         if(j % 2 == 0)
         {
             resultado += 1;
         }else{
         resultado -= 1;
         }
        }
    cout << resultado << endl;

    }

    return 0;
}
