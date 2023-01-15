#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, x, n) for (int i = x; i < (n); i++)
using ll = long long;

int n;
vector<int> h, s;
bool isOk(ll mid)
{
    vector<ll> second;
    rep(i, n)
    {
        if (mid - h[i] < 0)
            return false;
        second.push_back((mid - h[i]) / s[i]);
    }
    sort(second.begin(), second.end());
    rep(i, n) if (second[i] - i < 0) return false;
    return true;
}

int main()
{
    cin >> n;
    rep(i, n)
    {
        ll x, y;
        cin >> x >> y;
        h.push_back(x);
        s.push_back(y);
    }
    ll l = 0, r = pow(10, 15);
    ll mid;
    while (r - l > 1)
    {
        mid = (l + r) / 2;
        // cout << l << ' ' << r << ' ' << mid << endl;
        if (isOk(mid))
            r = mid;
        else
            l = mid;
    }
    cout << r << endl;

    return 0;
}