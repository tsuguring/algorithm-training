#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, x, n) for (int i = x; i < (n); i++)
using ll = long long;
int main()
{
    int n, m, x, t, d;
    cin >> n >> m >> x >> t >> d;
    if (m >= x)
        cout << t << endl;
    else
        cout << t - (x - m) * d << endl;
    return 0;
}