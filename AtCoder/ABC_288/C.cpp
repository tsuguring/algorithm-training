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
    set<int> se;
    rep(i, m)
    {
        int a, b;
        cin >> a >> b;
        se.insert(a);
        se.insert(b);
        g[a].push_back(b);
        g[b].push_back(a);
    }

    stack<int> s;
    map<int, bool> c;
    vector<int> cnv;
    for (auto x : se)
    {
        if (c[x])
            continue;
        int cn = 1;
        s.push(x);
        c[x] = 1;
        while (!s.empty())
        {
            int v = s.top();
            s.pop();
            for (auto nei : g[v])
            {
                if (c[nei])
                    continue;
                s.push(nei);
                c[nei] = 1;
                cn++;
            }
        }
        cnv.push_back(cn);
    }

    int sum = 0;
    rep(i, cnv.size())
    {
        sum += cnv[i] - 1;
    }

    cout << m - sum << endl;

    return 0;
}