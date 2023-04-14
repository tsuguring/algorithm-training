#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, x, n) for (int i = x; i < (n); i++)
using ll = long long;
int main()
{
    int n, w;
    cin >> n >> w;
    vector<int> vv(n), wv(n);
    rep(i, n) cin >> vv[i] >> wv[i];
    int t[n + 1][w + 1];
    rep(i, w + 1) t[0][i] = 0;
    rep(i, n)
    {
        rep(j, w + 1)
        {
            if (j >= wv[i])
                t[i + 1][j] = max(t[i][j], t[i + 1][j - wv[i]] + vv[i]);
            else
                t[i + 1][j] = t[i][j];
        }
    }
    cout << t[n][w] << endl;

    return 0;
}