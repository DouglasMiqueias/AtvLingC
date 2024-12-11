#include<bits/stdc++.h>
using namespace std;

double delta(double a, double b, double c)
{
    double delta = pow(b, 2) - 4 * a * c;
    return delta;
}
int main()
{
    double a, b, c;

    cin >> a >> b >> c;

    cout << "delta = " << fixed << setprecision(2) << delta(a, b, c);
    return 0;
}
