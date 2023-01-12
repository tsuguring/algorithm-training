#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, x, n) for (int i = x; i < (n); i++)
using ll = long long;
int main()
{
    int n, m;
    cin >> n >> m;
    map<int, vector<int>> g;
    rep(i, m)
    {
        int u, v;
        cin >> u >> v;
        g[u - 1].push_back(v - 1);
        g[v - 1].push_back(u - 1);
    }
    vector<bool> color(n, 0);
    int ans = 0;
    rep(i, n)
    {
        if (color[i])
            continue;
        queue<int> q;
        q.push(i);
        color[i] = 1;
        while (!q.empty())
        {
            int v = q.front();
            q.pop();
            for (auto nei : g[v])
            {
                if (color[nei])
                    continue;
                q.push(nei);
                color[nei] = 1;
            }
        }
        ans++;
    }
    cout << ans << endl;
    return 0;
}