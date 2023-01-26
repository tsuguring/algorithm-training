#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, x, n) for (int i = x; i < (n); i++)
using ll = long long;
int main()
{
    int n, x;
    cin >> n >> x;
    vector<ll> a(n), b(n);
    rep(i, n) cin >> a[i] >> b[i];
    int dp[n + 1][x + 1];
    rep(i, n + 1) rep(j, x + 1) dp[i][j] = 0;
    dp[0][0] = 1;

    rep(i, n) rep(j, x + 1) rep(k, b[i] + 1)
    {
        if (j - k * a[i] >= 0 and dp[i][j - k * a[i]])
        {
            dp[i + 1][j] = 1;
            // cout << i << ' ' << j << ' ' << k << endl;
        }
    }

    if (dp[n][x])
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}