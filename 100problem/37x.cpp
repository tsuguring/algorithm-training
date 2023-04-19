#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, x, n) for (int i = x; i < (n); i++)
using ll = long long;
int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> c(n);
    rep(i, m) cin >> c[i];
    int t[m + 1][n + 1];
    rep2(i, 1, n + 1) t[0][i] = 1e5;
    rep(i, m + 1) t[i][0] = 0;
    rep(i, m)
    {
        rep(j, n + 1)
        {
            if (c[i] > j)
                t[i + 1][j] = t[i][j];
            else
                t[i + 1][j] = min(t[i][j], t[i + 1][j - c[i]] + 1);
            // cout << i + 1 << ' ' << j << ' ' << t[i + 1][j] << endl;
        }
    }

    cout << t[m][n] << endl;

    return 0;
}