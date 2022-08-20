#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, x, n) for (int i = x; i < (n); i++)
using ll = long long;
int main()
{
    ll x, a, d, n;
    cin >> x >> a >> d >> n;
    if (d == 0)
    {
        cout << abs(x - a) << endl;
        return 0;
    }
    else if (d < 0)
    {
        d = -d;
        a = a - d * (n - 1);
    }

    ll z = 0, y = n - 1;
    while (z < y)
    {
        ll m = (z + y) / 2;
        if (a + m * d < x)
            z = m + 1;
        else
            y = m;
    }
    vector<ll> t;
    for (ll i = max(0ll, z - 3); i <= min((n - 1), z + 3); i++)
    {
        t.push_back(abs(a + d * i - x));
    }
    cout << *min_element(t.begin(), t.end()) << endl;

    return 0;
}