#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, x, n) for (int i = x; i < (n); i++)
using ll = long long;
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i, n) cin >> a[i];
    ll t[n - 1][21] = {0};
    rep(i, 21) if (i == a.front()) t[0][i] = 1;
    else t[0][i] = 0;
    rep(i, n - 2) rep(j, 21)
    {
        if (j + a[i + 1] < 21)
        {
            t[i + 1][j] += t[i][j + a[i + 1]];
            // cout << i + 1 << ' ' << j << ' ' << t[i + 1][j] << endl;
        }
        if (j - a[i + 1] >= 0)
        {
            t[i + 1][j] += t[i][j - a[i + 1]];
            // cout << i + 1 << ' ' << j << ' ' << t[i + 1][j] << endl;
        }
    }

    cout << t[n - 2][a.back()] << endl;

    return 0;
}