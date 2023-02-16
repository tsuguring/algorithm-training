#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, x, n) for (int i = x; i < (n); i++)
using ll = long long;
int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> cbv(m);
    rep(i, m)
    {
        int c;
        cin >> c;
        int cb = 0;
        rep(i, c)
        {
            int a;
            cin >> a;
            cb += (1 << (a - 1));
        }
        cbv[i] = cb;
    }

    int ans = 0;
    rep2(i, 1, 1 << m)
    {
        int c = 0;
        rep(j, m)
        {
            if (i & (1 << j))
            {
                c = (c | cbv[j]);
            }
        }
        if (c >= (1 << n) - 1)
        {
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}