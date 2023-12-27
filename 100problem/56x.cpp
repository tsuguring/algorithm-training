#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, x, n) for (int i = x; i < (n); i++)
using ll = long long;

#define INF 1e9
struct edge
{
    int to;
    int w;
};

map<int, vector<edge>> g;

vector<int> getAllMinDistance(vector<int> md, int start)
{
    md[start] = 0;
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> q;
    q.push(make_pair(0, start));
    while (!q.empty())
    {
        pair<int, int> now = q.top();
        q.pop();
        if (md[now.second] < now.first)
            continue;
        for (auto nei : g[now.second])
        {
            if (md[nei.to] > nei.w + md[now.second])
            {
                md[nei.to] = nei.w + md[now.second];
                q.push(make_pair(md[nei.to], nei.to));
            }
            // cout << now.first << ' ' << nei.to << ' ' << nei.w << ' ' << now.second << ' ' << md[now.second] << ' ' << md[nei.to] << endl;
        }
    }

    return md;
}

int main()
{
    int v, e, r;
    cin >> v >> e >> r;
    rep(i, e)
    {
        int s, t, d;
        cin >> s >> t >> d;
        g[s].push_back({t, d});
    }
    // for (auto itr = g.begin(); itr != g.end(); itr++)
    // {
    //     cout << itr->second.size() << endl;
    // }
    vector<int> md(v, INF);
    md = getAllMinDistance(md, r);
    rep(i, v)
    {
        if (md[i] == INF)
            cout << "INF" << endl;
        else
            cout << md[i] << endl;
    }

    return 0;
}