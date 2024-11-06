#include<bits/stdc++.h>
using namespace std;
#define HOTDOG 4.00
#define XSALADA 4.50
#define XBACON 5.00
#define TORRADA 2.00
#define REFRIGERANTE 1.50

int main()
{
    int n, q;
    double x;

     cin >> n >> q;

     cout << fixed << setprecision(2);
    switch(n)
    {
    case 1:
        x = HOTDOG * q;
        cout << "TOTAL: R$ " << x << endl;
        break;
    case 2:
        x = XSALADA * q;
        cout << "TOTAL: R$ " << x << endl;
        break;
    case 3:
        x = XBACON * q;
        cout << "TOTAL: R$ " << x << endl;
        break;
    case 4:
        x = TORRADA * q;
        cout << "TOTAL: R$ " << x << endl;
        break;
    case 5:
        x = REFRIGERANTE * q;
        cout << "TOTAL: R$ " << x << endl;
        break;
    }
    return 0;
}
