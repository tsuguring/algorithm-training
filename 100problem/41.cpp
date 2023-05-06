#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, x, n) for (int i = x; i < (n); i++)
using ll = long long;
int main()
{
    int d, n;
    cin >> d >> n;
    vector<int> t(d), a(n), b(n), c(n);
    rep(i, d) cin >> t[i];
    rep(i, n) cin >> a[i] >> b[i] >> c[i];
    vector<vector<int>> vt(d + 1, vector<int>(n, 0));

    rep(i, d) rep(j, n) rep(k, n)
    {
        if (a[k] <= t[i] and b[k] >= t[i] and i and vt[i][j] != -1)
        {
            vt[i + 1][k] = max(vt[i + 1][k], vt[i][j] + abs(c[k] - c[j]));
            // cout << i + 1 << ' ' << k << ' ' << j << ' ' << vt[i + 1][k] << ' ' << vt[i - 1][j] << endl;
        }
        if (a[k] > t[i] or b[k] < t[i])
            vt[i + 1][k] = -1;
    }

    int ans = 0;
    rep(i, n) ans = max(ans, vt[d][i]);
    cout << ans << endl;
    return 0;
}