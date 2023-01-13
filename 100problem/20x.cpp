#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, x, n) for (int i = x; i < (n); i++)
using ll = long long;
int main()
{
    int n;
    cin >> n;
    vector<int> a(n), b(n), c(n);
    rep(i, n) cin >> a[i];
    rep(i, n) cin >> b[i];
    rep(i, n) cin >> c[i];
    sort(a.begin(), a.end());
    sort(c.begin(), c.end());
    ll ans = 0;
    rep(i, n)
    {
        ll an = lower_bound(a.begin(), a.end(), b[i]) - a.begin();
        ll cn = n - (upper_bound(c.begin(), c.end(), b[i]) - c.begin());
        ans += an * cn;
        cout << an << ' ' << cn << endl;
    }
    cout << ans << endl;
    return 0;
}