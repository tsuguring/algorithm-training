#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, x, n) for (int i = x; i < (n); i++)
using ll = long long;
int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> p(n), v;
    set<int> s;
    rep(i, n) cin >> p[i];
    p.push_back(0);
    rep(i, n + 1)
    {
        rep(j, n + 1)
        {
            s.insert(p[i] + p[j]);
        }
    }
    for (auto i : s)
    {
        v.push_back(i);
        // cout << i << endl;
    }

    int ans, ma = 0;
    rep(i, v.size())
    {
        if (m - v[i] < 0)
            continue;
        int l = 0, r = v.size();
        while (r - l > 1)
        {
            int mid = (l + r) / 2;
            if (v[mid] > m - v[i])
                r = mid;
            else
                l = mid;
        }
        ma = max(ma, v[l] + v[i]);
        // cout << m - v[i] << ' ' << v[l] << ' ' << ma << endl;
    }
    cout << ma << endl;

    return 0;
}