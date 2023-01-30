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
    int start;
    rep(i, m)
    {
        int v1, v2;
        cin >> v1 >> v2;
        if (!i)
            start = v1;
        g[v1].push_back(v2);
        g[v2].push_back(v1);
    }

    stack<int> s;
    deque<int> p;
    map<int, int> che;
    s.push(start);
    int cou = 0;
    while (!s.empty())
    {
        int now = s.top();
        // cout << now << endl;
        che[now] = 1;
        p.push_back(now);
        if (p.size() == 3)
            p.pop_front();
        s.pop();
        for (auto nei : g[now])
        {
            if (p.front() != nei)
                if (che[nei])
                {
                    cout << "No" << endl;
                    exit(0);
                }
                else
                    s.push(nei);
        }
    }
    // cout << che.size() << endl;

    if (che.size() == n)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}