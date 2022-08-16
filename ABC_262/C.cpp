#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, x, n) for (int i = x; i < (n); i++)
using ll = long long;
int main()
{
    int n;
    cin >> n;
    int a[n];
    rep(i, n) cin >> a[i];
    ll c = 0;
    ll ans = 0;
    rep(i, n)
    {
        if (a[i] == i + 1)
            c++;
    }
    ans = c * (c - 1) / 2;
    rep(i, n)
    {
        if (a[i] > i + 1 && a[a[i] - 1] == i + 1)
        {
            ans++;
        }
    }
    cout << ans << endl;

    return 0;
}