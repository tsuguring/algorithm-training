#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, x, n) for (int i = x; i < (n); i++)
using ll = long long;
int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> v(m);
    rep(i, m)
    {
        int k;
        cin >> k;
        rep(j, k)
        {
            int s;
            cin >> s;
            v[i].push_back(s);
        }
    }
    vector<int> p(m);
    rep(i, m) cin >> p[i];
    int ans = 0;
    for (int i = 0; i < (1 << n); i++)
    {
        vector<int> c;
        for (int j = 0; j < n; j++)
        {
            if (i & (1 << j))
                c.push_back(j + 1);
        }
        int a = 0;
        rep(k, m)
        {
            int num = 0;
            rep(l, c.size())
            {
                if (count(v[k].begin(), v[k].end(), c[l]))
                    num++;
            }
            if (num % 2 == p[k])
                a++;
        }
        if (a == m)
            ans++;
    }

    cout << ans << endl;

    return 0;
}