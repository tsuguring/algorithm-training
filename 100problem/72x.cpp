#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, x, n) for (int i = x; i < (n); i++)
using ll = long long;
ll calc(int a, int b, int m)
{
    if (b == 0)
        return 1;
    else if (b % 2)
        return (a * calc(a, b - 1, m)) % m;
    else
    {
        ll res = calc(a, b / 2, m);
        return res * res % m;
    }
}
int main()
{
    int w, h;
    cin >> w >> h;
    ll m = 1000000007;

    ll ans = 1;
    rep2(i, 1, w + h - 1)
    {
        ans *= i;
        ans %= m;
    }

    rep2(i, 2, h)
    {
        ans *= calc(i, m - 2, m);
        ans %= m;
    }

    rep2(i, 1, w)
    {
        ans *= calc(i, m - 2, m);
        ans %= m;
    }

    cout << ans << endl;

    return 0;
}