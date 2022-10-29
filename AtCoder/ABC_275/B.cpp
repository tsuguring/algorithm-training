#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, x, n) for (int i = x; i < (n); i++)
using ll = unsigned long long;
int main()
{
    ll a, b, c, d, e, f;
    ll x = 998244353;
    cin >> a >> b >> c >> d >> e >> f;
    a = a % x;
    b = b % x;
    c = c % x;
    d = d % x;
    e = e % x;
    f = f % x;
    ll abc = (a * b) % x;
    abc = (abc * c) % x;
    ll def = (d * e) % x;
    def = (def * f) % x;
    ll ans = (abc - def + x) % x;
    cout << ans << endl;
    return 0;
}
