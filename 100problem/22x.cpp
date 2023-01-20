#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, x, n) for (int i = x; i < (n); i++)
using ll = long long;

double p;
double f(double x)
{
    return x + p / pow(2, x / 1.5);
}

int main()
{
    cin >> p;
    double l = 0, r = p;
    while (r - l > 1e-8)
    {
        double c1 = (l * 2 + r) / 3;
        double c2 = (l + r * 2) / 3;
        if (f(c1) > f(c2))
            l = c1;
        else
            r = c2;
    }
    cout << fixed << setprecision(10) << f(l) << endl;

    return 0;
}