#include<bits/stdc++.h>
using namespace std;

void crescente(int n)
{
    for(int i = 0; i < n; i++)
    {
        cout << i+1 << " ";
    }
    cout << endl;
}
int main()
{
    int n;
    cin >> n;

    crescente(n);

    return 0;
}
