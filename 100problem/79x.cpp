#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, x, n) for (int i = x; i < (n); i++)
using ll = long long;
int main()
{
    int n, m, cq;
    cin >> n >> m >> cq;
    vector<vector<int>> cnt(n + 1, vector<int>(n + 1, 0));
    rep(i, m)
    {
        int l, r;
        cin >> l >> r;
        cnt[l][r]++;
    }
    rep(i, n) rep(j, n)
    {
        cnt[i + 1][j + 1] += cnt[i + 1][j];
    }
    rep(i, cq)
    {
        int p, q, ans = 0;
        cin >> p >> q;
        rep2(j, p, q + 1) ans += cnt[j][q];
        cout << ans << endl;
    }

    return 0;
}