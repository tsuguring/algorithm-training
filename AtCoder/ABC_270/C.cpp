#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, x, n) for (int i = x; i < (n); i++)
using ll = long long;

vector<int> v;
vector<int> g[200010];
bool f[200010];
bool stop;

void dfs(int start, int end)
{
    if (!stop)
        v.push_back(start);
    if (start == end)
        stop = true;
    f[start] = true;
    rep(i, g[start].size())
    {
        if (!f[g[start][i]])
            dfs(g[start][i], end);
    }
    if (!stop)
        v.erase(v.end() - 1);
    return;
}

int main()
{
    int n;
    cin >> n;
    int x, y;
    cin >> x >> y;
    rep(i, n - 1)
    {
        int a, b;
        cin >> a >> b;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    rep(i, n + 1) f[i] = false;
    stop = false;
    dfs(x, y);

    rep(i, v.size())
    {
        if (!i)
            cout << v[i];
        else
            cout << ' ' << v[i];
    }

    return 0;
}