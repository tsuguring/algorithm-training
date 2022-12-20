#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, x, n) for (int i = x; i < (n); i++)
using ll = long long;
int main()
{
    int n, k;
    cin >> n >> k;
    vector<ll> a(n - 1);
    ll firsth;
    cin >> firsth;
    rep(i, n - 1) cin >> a[i];
    ll ans = 1000000000000000;
    for (int i = 0; i < (1 << (n - 1)); i++)
    {
        ll sumh = 0;
        ll maxh = firsth;
        if (__builtin_popcount(i) == k - 1)
        {
            rep(j, n - 1)
            {
                if (i & (1 << j))
                {
                    if (a[j] > maxh)
                    {
                        maxh = a[j];
                    }
                    else
                    {
                        sumh += maxh - a[j] + 1;
                        maxh += 1;
                    }
                }
                else
                    maxh = max(maxh, a[j]);
            }
            ans = min(ans, sumh);
        }
    }
    cout << ans << endl;

    return 0;
}