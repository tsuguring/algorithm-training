#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, x, n) for (int i = x; i < (n); i++)
using ll = long long;
int main()
{
    vector<int> hh(3), w(3);
    rep(i, 3) cin >> hh[i];
    rep(i, 3) cin >> w[i];
    int hmax = *max_element(hh.begin(), hh.end());
    int wmax = *max_element(w.begin(), w.end());
    int m = max(hmax, wmax);
    int ans = 0;
    for (int a = 1; a < m; a++)
    {
        for (int b = 1; b < m; b++)
        {
            for (int d = 1; d < m; d++)
            {
                for (int e = 1; e < m; e++)
                {
                    int c = hh[0] - a - b;
                    int f = hh[1] - d - e;
                    int g = w[0] - a - d;
                    int h = w[1] - b - e;
                    int i = w[2] - c - f;
                    if (min({c, f, g, h, i}) > 0 && g + h + i == hh[2])
                        ans++;
                }
            }
        }
    }

    cout << ans << endl;
    return 0;
}