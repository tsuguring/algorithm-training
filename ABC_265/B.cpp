#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, x, n) for (int i = x; i < (n); i++)
using ll = long long;
int main()
{
    ll n, m, t;
    cin >> n >> m >> t;
    vector<ll> a(n);
    rep(i, n - 1) cin >> a[i];
    map<ll, ll> ma = {};
    rep(i, m)
    {
        ll x, y;
        cin >> x >> y;
        ma[x - 1] = y;
    }

    rep(i, n - 1)
    {
        if (ma[i])
            t += ma[i];
        t -= a[i];
        if (t <= 0)
        {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}