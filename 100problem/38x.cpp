#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, x, n) for (int i = x; i < (n); i++)
using ll = long long;
int main()
{
    int q;
    cin >> q;
    rep(i, q)
    {
        string x, y;
        cin >> x >> y;
        int t[x.size() + 1][y.size() + 1];
        rep(i, x.size() + 1) t[i][0] = 0;
        rep(i, y.size() + 1) t[0][i] = 0;
        rep(i, x.size()) rep(j, y.size())
        {
            if (x[i] == y[j])
                t[i + 1][j + 1] = t[i][j] + 1;
            else
                t[i + 1][j + 1] = max(t[i][j + 1], t[i + 1][j]);
        }

        cout << t[x.size()][y.size()] << endl;
    }
    return 0;
}