#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, x, n) for (int i = x; i < (n); i++)
using ll = long long;
int main()
{
    int n, q;
    cin >> n >> q;
    map<int, vector<int>> tree;
    map<int, int> point;
    rep(i, n - 1)
    {
        int a, b;
        cin >> a >> b;
        tree[a].push_back(b);
        tree[b].push_back(a);
    }
    rep(i, q)
    {
        int p, x;
        cin >> p >> x;
        point[p] += x;
    }

    stack<int> s;
    map<int, bool> c;
    s.push(1);
    while (!s.empty())
    {
        int v = s.top();
        c[v] = 1;
        s.pop();
        for (auto nv : tree[v])
        {
            if (c[nv])
                continue;
            point[nv] += point[v];
            s.push(nv);
        }
    }

    for (auto itr = point.begin(); itr != point.end(); itr++)
    {
        if (itr == point.begin())
            cout << itr->second;
        else
            cout << ' ' << itr->second;
    }
    cout << endl;

    return 0;
}