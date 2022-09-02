#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, x, n) for (int i = x; i < (n); i++)
using ll = long long;
int main()
{
    ll n;
    cin >> n;
    vector<pair<ll, ll>> xy(n);
    set<pair<ll, ll>> s;
    rep(i, n)
    {
        cin >> xy[i].first >> xy[i].second;
        s.insert(xy[i]);
    }
    ll ma = 0;
    rep(i, n - 1)
    {
        rep2(j, i + 1, n)
        {
            ll cx, cy, dx, dy;
            cx = xy[j].first - xy[j].second + xy[i].second;
            cy = xy[j].second + xy[j].first - xy[i].first;
            dx = xy[i].first - xy[j].second + xy[i].second;
            dy = xy[i].second + xy[j].first - xy[i].first;
            if (s.count(make_pair(cx, cy)) and s.count(make_pair(dx, dy)))
            {
                ll ans = pow(xy[j].first - xy[i].first, 2) + pow(xy[j].second - xy[i].second, 2);
                ma = max(ma, ans);
            }
        }
    }
    cout << ma << endl;

    return 0;
}