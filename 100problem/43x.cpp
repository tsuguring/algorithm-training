#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, x, n) for (int i = x; i < (n); i++)
using ll = long long;
int main()
{
    int n;
    cin >> n;
    vector<vector<char>> f(5, vector<char>(n));
    rep(i, 5) rep(j, n) cin >> f[i][j];
    vector<vector<int>> t(3, vector<int>(n, 0));
    int cr = 0, cb = 0, cw = 0;
    rep(i, 3)
    {
        rep(j, 5)
        {
            if (i == 0)
            {
                if (f[j][0] != 'R')
                    cr++;
            }
            else if (i == 1)
            {
                if (f[j][0] != 'B')
                    cb++;
            }
            else
            {
                if (f[j][0] != 'W')
                    cw++;
            }
        }
    }
    // cout << cr << ' ' << cb << ' ' << cw << endl;
    t[0][0] = cr;
    t[1][0] = cb;
    t[2][0] = cw;
    rep(i, n - 1) rep(j, 3)
    {
        cr = 0;
        cb = 0;
        cw = 0;
        rep(k, 5)
        {
            if (j == 0)
            {
                if (f[k][i + 1] != 'R')
                    cr++;
                t[j][i + 1] = min(t[1][i], t[2][i]) + cr;
            }
            else if (j == 1)
            {
                if (f[k][i + 1] != 'B')
                    cb++;
                t[j][i + 1] = min(t[0][i], t[2][i]) + cb;
            }
            else
            {
                if (f[k][i + 1] != 'W')
                    cw++;
                t[j][i + 1] = min(t[0][i], t[1][i]) + cw;
            }
        }
        // cout << j << ' ' << i + 1 << ' ' << t[j][i + 1] << endl;
    }
    int ans = 1e9;
    rep(i, 3) ans = min(ans, t[i][n - 1]);
    cout << ans << endl;

    return 0;
}