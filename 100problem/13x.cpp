#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, x, n) for (int i = x; i < (n); i++)
using ll = long long;
int main()
{
    int r, c;
    cin >> r >> c;
    bool se[r][c];
    rep(i, r) rep(j, c)
    {
        cin >> se[i][j];
    }

    int ans = 0;
    for (int i = 0; i < (1 << r); i++)
    {
        int t = 0;
        rep(j, c)
        {
            int x = 0, y = 0;
            rep(k, r)
            {
                if (i & (1 << k))
                {
                    if (se[k][j])
                        x++;
                    else
                        y++;
                }
                else
                {
                    if (se[k][j])
                        y++;
                    else
                        x++;
                }
            }
            t += max(x, y);
        }
        ans = max(ans, t);
    }

    cout << ans << endl;

    return 0;
}
