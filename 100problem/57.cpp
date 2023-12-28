#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, x, n) for (int i = x; i < (n); i++)
using ll = long long;

#define INF 1e9
struct edge
{
    int to;
    int dist;
};
map<int, vector<edge>> g;

void getMinDistance(int n, int s, int t)
{
    vector<int> md(n, INF);
    md[s] = 0;
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> q;
    q.push(make_pair(0, s));
    while (!q.empty())
    {
        pair<int, int> now = q.top();
        q.pop();
        if (md[now.second] < now.first)
            continue;
        for (auto nei : g[now.second])
        {
            if (md[nei.to] > nei.dist + md[now.second])
            {
                md[nei.to] = nei.dist + md[now.second];
                q.push(make_pair(md[nei.to], nei.to));
            }
        }
    }
    // rep(i, md.size()) cout << md[i] << endl;
    if (md[t] == INF)
        cout << -1 << endl;
    else
        cout << md[t] << endl;
}

int main()
{
    int n, k;
    cin >> n >> k;

    rep(i, k)
    {
        bool isInfo;
        cin >> isInfo;
        if (isInfo)
        {
            int c, d, e;
            cin >> c >> d >> e;
            c--;
            d--;
            g[c].push_back({d, e});
            g[d].push_back({c, e});
        }
        else
        {
            int a, b;
            cin >> a >> b;
            a--;
            b--;
            getMinDistance(n, a, b);
        }
    }
    return 0;
}