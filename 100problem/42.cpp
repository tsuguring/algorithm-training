#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, x, n) for (int i = x; i < (n); i++)
using ll = long long;
int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> d(n), c(m);
    rep(i, n)
    {
        cin >> d[i];
    }
    rep(i, m) cin >> c[i];

    vector<vector<ll>> t(m + 1, vector<ll>(n + 1, 0));
    rep(i, m) rep2(j, 1, n + 1)
    {
        if (i >= j)
        {
            t[i + 1][j] = min(t[i][j], t[i][j - 1] + d[j - 1] * c[i]);
        }
        else if (i == j - 1)
            t[i + 1][j] = t[i][j - 1] + d[j - 1] * c[i];
        // cout << i + 1 << ' ' << j << ' ' << t[i + 1][j] << ' ' << t[i][j] << ' ' << t[i][j - 1] << ' ' << d[j - 1] << ' ' << c[i] << endl;
    }

    ll ans = 1e10;
    rep(i, m - n + 1)
    {
        ans = min(t[n + i][n], ans);
    }
    cout << ans << endl;
    return 0;
}