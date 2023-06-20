#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, x, n) for (int i = x; i < (n); i++)
using ll = long long;
#define INF 1e17

int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<ll>> w(n, vector<ll>(n, INF));
    vector<vector<ll>> tv(n, vector<ll>(n, INF));
    rep(i, m)
    {
        ll s, t, d, time;
        cin >> s >> t >> d >> time;
        w[s - 1][t - 1] = d;
        tv[s - 1][t - 1] = time;
        w[t - 1][s - 1] = d;
        tv[t - 1][s - 1] = time;
    }
    vector<vector<pair<ll, ll>>> t(n, vector<pair<ll, ll>>(1 << n, make_pair(INF, 0)));
    t[0][0].first = 0;
    t[0][0].second = 1;
    rep(i, 1 << n)
    {
        rep(j, n)
        {
            if (!(i & (1 << j)))
            {
                rep(k, n)
                {
                    if (t[k][i].first + w[k][j] <= tv[k][j])
                    {
                        if (t[j][i + (1 << j)].first > t[k][i].first + w[k][j])
                            t[j][i + (1 << j)] = make_pair(t[k][i].first + w[k][j], 0);
                        if (t[j][i + (1 << j)].first == t[k][i].first + w[k][j])
                            t[j][i + (1 << j)].second += t[k][i].second;
                    }
                }
            }
        }
    }
    pair<ll, ll> ans = t[0][(1 << n) - 1];
    if (ans.first == INF)
        cout << "IMPOSSIBLE" << endl;
    else
        cout << ans.first << ' ' << ans.second << endl;

    return 0;
}