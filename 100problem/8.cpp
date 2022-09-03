#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, x, n) for (int i = x; i < (n); i++)
using ll = long long;
int main()
{
    int n;
    cin >> n;
    vector<ll> a(n), b(n);
    rep(i, n) cin >> a[i] >> b[i];
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    ll in, out;
    in = a[a.size() / 2];
    out = b[b.size() / 2];

    ll ans = 0;
    rep(i, n)
    {
        ans += abs(in - a[i]);
        ans += (b[i] - a[i]);
        ans += abs(out - b[i]);
    }
    cout << ans << endl;
    return 0;
}