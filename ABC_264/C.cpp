#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, x, n) for (int i = x; i < (n); i++)
using ll = long long;
int main()
{
    int h1, w1;
    cin >> h1 >> w1;
    int a[h1][w1];
    rep(i, h1)
    {
        rep(j, w1) cin >> a[i][j];
    }
    int h2, w2;
    cin >> h2 >> w2;
    int b[h2][w2];
    rep(i, h2)
    {
        rep(j, w2) cin >> b[i][j];
    }

    rep(i, (1 << h1))
    {
        rep(j, (1 << w1))
        {
            vector<int> hv, wv;
            rep(k, h1)
            {
                if ((i >> k) & 1)
                    hv.push_back(k);
            }
            rep(l, w1)
            {
                if ((j >> l) & 1)
                    wv.push_back(l);
            }
            if (hv.size() != h2 || wv.size() != w2)
                continue;

            bool ans = true;
            rep(m, h2)
            {
                rep(n, w2)
                {
                    if (a[hv[m]][wv[n]] != b[m][n])
                        ans = false;
                }
            }
            if (ans)
            {
                cout << "Yes" << endl;
                return 0;
            }
        }
    }
    cout << "No" << endl;

    return 0;
}