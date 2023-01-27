#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, x, n) for (int i = x; i < (n); i++)
using ll = long long;
int main()
{
    int n;
    cin >> n;
    map<int, vector<int>> g, g1;
    rep(i, n)
    {
        int u, k;
        cin >> u >> k;
        rep(i, k)
        {
            int v;
            cin >> v;
            g[u - 1].push_back(v - 1);
        }
    }
    rep(i, n) sort(g[i].begin(), g[i].end());
    vector<int> d(n, 0), f(n, 0), vc(n, 0);
    int time = 1;
    stack<int> s;
    rep(i, n)
    {
        if (d[i])
            continue;
        d[i] = time++;
        s.push(i);
        while (!s.empty())
        {
            int v = s.top();
            if (g[v].size() > vc[v])
            {
                int nv = g[v].at(vc[v]);
                vc[v]++;
                if (d[nv])
                    continue;
                d[nv] = time++;
                s.push(nv);
            }
            else
            {
                s.pop();
                f[v] = time++;
            }
        }
    }
    rep(i, n)
    {
        cout << i + 1 << ' ' << d[i] << ' ' << f[i] << endl;
    }
    return 0;
}