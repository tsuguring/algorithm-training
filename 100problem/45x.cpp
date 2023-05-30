#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, x, n) for (int i = x; i < (n); i++)
using ll = long long;
int main()
{
    while (1)
    {
        int n, m;
        cin >> n >> m;
        if (!n and !m)
            break;
        vector<int> c(m), x(n);
        rep(i, m) cin >> c[i];
        rep(i, n) cin >> x[i];
        vector<vector<int>> t(n + 1, vector<int>(256, 1e9));
        t[0][128] = 0;
        rep(i, n) rep(j, 256) rep(k, m)
        {
            int y = j + c[k];
            if (y < 0)
                y = 0;
            else if (y > 255)
                y = 255;
            // if (t[i + 1][y] == 2)
            //     cout << i + 1 << ' ' << y << endl;
            t[i + 1][y] = min(t[i + 1][y], t[i][j] + (x[i] - y) * (x[i] - y));
        }
        int ans = 1e9;
        rep(i, 256) ans = min(ans, t[n][i]);
        cout << ans << endl;
    }

    return 0;
}