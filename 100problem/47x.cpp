#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, x, n) for (int i = x; i < (n); i++)
using ll = long long;
int main()
{
    int n;
    cin >> n;
    vector<ll> a(n);
    rep(i, n) cin >> a[i];
    vector<vector<ll>> t(n, vector<ll>(n, 0)); // t[i][j] = cakeの残りがi-jである時のJOIくんの取り分の最大値
    rep2(size, 1, n + 1) rep(left, n)
    {
        int right = (left + size) % n;
        if ((n - size) % 2) // 取ったケーキが偶数でない=IOIちゃんの番
        {
            if (a[left] > a[(right + n - 1) % n])
                t[left][right] = t[(left + 1) % n][right];
            else
                t[left][right] = t[left][(right + n - 1) % n];
        }
        else
        {
            t[left][right] = max(a[left] + t[(left + 1) % n][right], a[(right + n - 1) % n] + t[left][(right + n - 1) % n]);
        }
        // cout << left << ' ' << right << ' ' << t[left][right] << endl;
    }

    ll ans = 0;
    rep(i, n)
    {
        ans = max(ans, t[i][i]);
    }
    cout << ans << endl;
    return 0;
}