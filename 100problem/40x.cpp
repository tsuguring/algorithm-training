#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, x, n) for (int i = x; i < (n); i++)
using ll = long long;
int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> va(n, 0);
    rep(i, k)
    {
        int a, b;
        cin >> a >> b;
        va[a - 1] = b;
    }
    vector<vector<vector<int>>> t(n + 1, vector<vector<int>>(4, vector<int>(4, 0)));
    t[0][0][0] = 1;
    rep(i, n) rep(j, 4) rep(k, 4) rep2(l, 1, 4)
    {
        // パスタが指定されているのにlが違うパスタを指していればスキップ
        if (va[i] and va[i] != l)
            continue;
        // 3連続で同じパスタでなければテーブルを更新
        if (j != k or k != l)
        {
            // cout << i << ' ' << l << ' ' << k << ' ' << j << ' ' << t[i][k][j] << endl;
            t[i + 1][l][k] += t[i][k][j];
            t[i + 1][l][k] %= 10000;
        }
    }

    int ans = 0;
    rep(i, 4) rep(j, 4)
    {
        ans += t[n][i][j];
        ans %= 10000;
    }

    cout << ans << endl;

    return 0;
}