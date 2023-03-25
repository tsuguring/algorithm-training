#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, x, n) for (int i = x; i < (n); i++)
using ll = long long;
int main()
{
    int n, w;
    cin >> n >> w;
    vector<int> vv(n), wv(n);
    rep(i, n) cin >> vv[i] >> wv[i];
    int dp[n + 1][w + 1];
    rep(i, w + 1) dp[0][i] = 0;
    rep(i, n)
    {
        rep(j, w + 1)
        {
            if (j >= wv[i])
                dp[i + 1][j] = max(dp[i][j], dp[i][j - wv[i]] + vv[i]);
            else
                dp[i + 1][j] = dp[i][j];
        }
    }

    cout << dp[n][w] << endl;

    return 0;
}