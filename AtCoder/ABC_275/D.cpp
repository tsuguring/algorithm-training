#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, x, n) for (int i = x; i < (n); i++)
using ll = long long;

map<ll, ll> m;

ll f(ll n)
{
    if (n == 0)
        return 1;
    if (m.count(n))
        return m[n];
    ll ans = f(n / 2) + f(n / 3);
    return m[n] = ans;
}

int main()
{
    ll n;
    cin >> n;
    cout << f(n) << endl;
    ;

    return 0;
}
