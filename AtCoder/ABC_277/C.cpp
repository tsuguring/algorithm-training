#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, x, n) for (int i = x; i < (n); i++)
using ll = long long;

int main()
{
    int n;
    cin >> n;
    map<ll, vector<int>> m;
    rep(i, n)
    {
        int a, b;
        cin >> a >> b;
        m[a].push_back(b);
        m[b].push_back(a);
    }
    set<int> reach;
    queue<int> q;
    q.push(1);
    reach.insert(1);
    while (!q.empty())
    {
        int v = q.front();
        q.pop();
        for (auto nei : m[v])
        {
            if (reach.count(nei))
                continue;
            reach.insert(nei);
            q.push(nei);
        }
    }
    cout << (*reach.rbegin()) << endl;

    return 0;
}