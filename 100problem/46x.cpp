#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, x, n) for (int i = x; i < (n); i++)
using ll = long long;
int main()
{
    int n;
    cin >> n;
    vector<int> p(n + 1);
    rep(i, n)
    {
        cin >> p[i] >> p[i + 1];
    }
    vector<vector<int>> t(n + 1, vector<int>(n + 1, 0));
    rep2(l, 2, n + 1) rep(i, n - l + 1)
    {
        int j = i + l - 1;
        t[i][j] = 1e9;
        rep2(k, i, j)
        {
            t[i][j] = min(t[i][j], t[i][k] + t[k + 1][j] + p[i] * p[k + 1] * p[j + 1]);
        }
        // cout << i << ' ' << j << ' ' << t[i][j] << endl;
    }

    cout << t[0][n - 1] << endl;

    return 0;
}