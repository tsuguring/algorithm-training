#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, x, n) for (int i = x; i < (n); i++)
using ll = long long;
int main()
{
    int n, m;
    cin >> n >> m;
    bool r[12][12] = {false};
    rep(i, m)
    {
        int x, y;
        cin >> x >> y;
        r[x - 1][y - 1] = true;
        r[y - 1][x - 1] = true;
    }

    int ans = 0;

    for (int i = 0; i < (1 << n); i++)
    {
        bool c = true;
        rep(j, n - 1)
        {
            for (int k = j + 1; k < n; k++)
            {
                if (i & (1 << j) && i & (1 << k) && !r[j][k])
                {
                    c = false;
                }
            }
        }
        if (c)
            ans = max(ans, __builtin_popcount(i));
    }

    cout << ans << endl;
    return 0;
}