#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, x, n) for (int i = x; i < (n); i++)
using ll = long long;
int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<ll>> a(n, vector<ll>(m));
    rep(i, n)
    {
        rep(j, m)
        {
            cin >> a[i][j];
        }
    }
    vector<ll> ma(n);
    ll ans = 0;
    rep(i, m)
    {
        rep2(j, i + 1, m)
        {
            ll mm = 0;
            rep(k, n)
            {
                ma[k] = max(a[k][i], a[k][j]);
                mm += ma[k];
            }
            ans = max(mm, ans);
        }
    }
    cout << ans << endl;

    return 0;
}