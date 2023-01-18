#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, x, n) for (int i = x; i < (n); i++)
using ll = long long;

int main()
{
    int n;
    cin >> n;
    map<string, string> g;
    map<string, bool> first, last;
    rep(i, n)
    {
        string s, t;
        cin >> s >> t;
        g[s] = t;
        first[s] = last[s] = 0;
    }
    for (auto itr = g.begin(); itr != g.end(); ++itr)
    {
        if (first[itr->first])
            continue;
        stack<string> s;
        s.push(itr->first);
        first[itr->first] = 1;
        while (!s.empty())
        {
            string v = s.top();
            if (g[v].size() && !last[g[v]])
            {
                string nv = g[v];
                if (first[nv] && !last[nv])
                {
                    cout << "No" << endl;
                    exit(0);
                }
                s.push(nv);
                first[nv] = 1;
            }
            else
            {
                s.pop();
                last[v] = 1;
            }
        }
    }
    cout << "Yes" << endl;

    return 0;
}