#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, x, n) for (int i = x; i < (n); i++)
using ll = long long;
int main()
{
    float a, b, d;
    cin >> a >> b >> d;
    float p = M_PI / 180;
    cout << fixed << setprecision(20) << a * cos(d * p) - b * (d * p) << ' ' << a * sin(d * p) + b * cos(d * p) << endl;
   return 0;
}