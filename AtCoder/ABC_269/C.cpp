#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, x, n) for (int i = x; i < (n); i++)
using ll = long long;
int main()
{
    ll n;
    cin >> n;
    vector<ll> v = {0};
    rep(i, 60)
    {
        if (n & (1ll << i))
        {
            int vi = v.size();
            rep(j, vi)
            {
                v.push_back(v[j] | (1ll << i));
            }
        }
    }
    for (auto &vx : v)
        cout << vx << "\n";
    return 0;
}