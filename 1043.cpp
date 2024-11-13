#include<bits/stdc++.h>
using namespace std;

int main()
{
    double a, b, c, x;

    cin >> a >> b >> c;

    cout << fixed << setprecision(1);

    if(a + b > c && a + c > b && b + c>a)
    {
        x = a + b + c;
        cout << "Perimetro = " << x << endl;
    }else
    {
        x = (a+b) * c / 2;
        cout << "Area = " <<  x << endl;
    }

}
