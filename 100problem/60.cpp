#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, x, n) for (int i = x; i < (n); i++)
using ll = long long;

#define INF 1e16
vector<vector<ll>> g;

void floyd(int n)
{
    rep(k, n) rep(i, n)
    {
        if (g[i][k] == INF)
            continue;
        rep(j, n)
        {
            if (g[k][j] == INF)
                continue;
            g[i][j] = min(g[i][j], g[i][k] + g[k][j]);
        }
    }
}
int main()
{
    int v, e;
    cin >> v >> e;
    g.resize(v, vector<ll>(v, INF));
    rep(i, v)
    {
        g[i][i] = 0;
    }

    rep(i, e)
    {
        int s, t, d;
        cin >> s >> t >> d;
        g[s][t] = d;
    }

    floyd(v);

    bool isNegative = false;
    rep(i, v) if (g[i][i] != 0) isNegative = true;

    if (isNegative)
        cout << "NEGATIVE CYCLE" << endl;
    else
    {
        rep(i, v)
        {
            rep(j, v)
            {
                if (j)
                {
                    if (g[i][j] == INF)
                        cout << ' ' << "INF";
                    else
                        cout << ' ' << g[i][j];
                }
                else
                {
                    if (g[i][j] == INF)
                        cout << "INF";
                    else
                        cout << g[i][j];
                }
            }
            cout << endl;
        }
    }

    return 0;
}