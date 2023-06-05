#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, x, n) for (int i = x; i < (n); i++)
using ll = long long;
int main()
{
    while (1)
    {
        int n;
        cin >> n;
        if (!n)
            break;
        vector<int> w(n);
        rep(i, n) cin >> w[i];
        vector<vector<int>> t(n + 1, vector<int>(n + 1, 0));
        rep2(l, 1, n) rep(i, n - l)
        {
            int j = i + l;
            if (l % 2)
            {
                if (t[i + 1][j - 1] == l - 1 and abs(w[i] - w[j]) < 2)
                    t[i][j] = l + 1;
                rep2(k, i + 1, j) t[i][j] = max(t[i][j], t[i][k] + t[k + 1][j]);
            }
            else
                t[i][j] = max(t[i + 1][j], t[i][j - 1]);
            // cout << i << ' ' << j << ' ' << t[i][j] << endl;
        }

        cout << t[0][n - 1] << endl;
    }
    return 0;
}