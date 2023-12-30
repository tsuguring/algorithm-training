#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, x, n) for (int i = x; i < (n); i++)
using ll = long long;

#define INF 1e9
vector<vector<int>> g;

void writeMinDist(int n)
{
    rep(i, n) rep(j, n)
    {
        if (g[j][i] == INF)
            continue;
        rep(k, n)
        {
            if (g[i][k] == INF)
                continue;
            g[j][k] = min(g[j][k], g[j][i] + g[i][k]);
        }
    }
}

int main()
{
    int n, m;
    cin >> n >> m;
    g.resize(n, vector<int>(n, INF));
    rep(i, n) g[i][i] = 0;
    rep(i, m)
    {
        int s, t, d;
        cin >> s >> t >> d;
        s--;
        t--;
        g[s][t] = d;
        g[t][s] = d;
    }

    writeMinDist(n);

    int ans = INF;
    rep(i, n)
    {
        int maxdist = 0;
        rep(j, n)
        {
            maxdist = max(maxdist, g[i][j]);
        }
        ans = min(maxdist, ans);
    }
    cout << ans << endl;

    return 0;
}
