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

int nCr(int n, int r)
{
    ll ans = 1, mod = 1000000007;
    rep2(i, 2, n + 1)
    {
        ans *= i;
        ans %= mod;
    }

    rep2(i, 2, r + 1)
    {
        ans *= calc(i, mod - 2, mod);
        ans %= mod;
    }

    rep2(i, 2, n - r + 1)
    {
        ans *= calc(i, mod - 2, mod);
        ans %= mod;
    }

    return ans;
}

int main()
{
    int x, y;
    cin >> x >> y;

    rep(a, x + 1)
    {
        int b;
        b = x - a;
        // bが奇数だと目的地にたどり着けない　(+2, +1)進むため
        if (b % 2)
            continue;
        // 残りの横マスを2で割ることで (+2, +1)の回数を求める
        b /= 2;

        if (2 * a + b == y)
        {
            cout << nCr(a + b, a) << endl;
            return 0;
        }
    }
    cout << 0 << endl;
    return 0;
}