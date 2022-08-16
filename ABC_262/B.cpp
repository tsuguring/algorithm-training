#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, x, n) for (int i = x; i < (n); i++)
using ll = long long;
int main()
{
    int n, m;
    cin >> n >> m;
    int uv[n][n] = {};
    rep(i, m)
    {
        int x, y;
        cin >> x >> y;
        uv[x - 1][y - 1] = uv[y - 1][x - 1] = 1;
    }

    int ans = 0;
    rep(i, n)
    {
        rep2(j, i + 1, n)
        {
            rep2(k, j + 1, n)
            {
                if (uv[i][j] && uv[j][k] && uv[k][i])
                    ans++;
            }
        }
    }

    cout << ans << endl;

    return 0;
}
