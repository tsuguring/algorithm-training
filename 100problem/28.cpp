#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, x, n) for (int i = x; i < (n); i++)
using ll = long long;
int main()
{
    int n;
    cin >> n;
    map<int, vector<int>> g;
    rep(i, n)
    {
        int u, k;
        cin >> u >> k;
        rep(i, k)
        {
            int v;
            cin >> v;
            g[u].push_back(v);
        }
    }

    queue<int> q;
    q.push(1);
    vector<int> dv(n, -1);
    int d = 0;
    dv[0] = d;
    while (!q.empty())
    {
        int v = q.front();
        q.pop();
        for (auto nv : g[v])
        {
            if (dv[nv - 1] == -1)
            {
                q.push(nv);
                dv[nv - 1] = dv[v - 1] + 1;
            }
        }
    }

    rep(i, n)
    {
        cout << i + 1 << ' ' << dv[i] << endl;
    }
    return 0;
}