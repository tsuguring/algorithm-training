#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, x, n) for (int i = x; i < (n); i++)
using ll = long long;
#define INF 1e9
int main()
{
    int v, e;
    cin >> v >> e;
    vector<vector<int>> w(v, vector<int>(v, INF));
    rep(i, e)
    {
        int s, t, d;
        cin >> s >> t >> d;
        w[s][t] = d;
    }
    vector<vector<int>> t(v, vector<int>(1 << v, INF));
    t[0][0] = 0;
    rep(i, 1 << v)
    {
        rep(j, v) // j=行き先ノード
        {
            if (!(i & (1 << j))) // j番目のビットが0である場合、つまりjノードが部分集合に含まれていない場合。(含まれていると、二度訪れることになる。)
            {
                rep(k, v)
                {
                    t[j][i + (1 << j)] = min(t[j][i + (1 << j)], t[k][i] + w[k][j]); // i+(1<<j)は部分集合に行き先ノードを追加していることを表す。
                    // cout << j << ' ' << i + (1 << j) << ' ' << t[j][i + (1 << j)] << ' ' << t[k][i] << ' ' << w[k][j] << endl;
                }
            }
        }
    }
    int ans = t[0][(1 << v) - 1];
    if (ans == INF)
        cout << -1 << endl;
    else
        cout << ans << endl;

    return 0;
}