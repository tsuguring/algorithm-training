#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, x, n) for (int i = x; i < (n); i++)
using ll = long long;
int main()
{
    int m, n;
    cin >> m >> n;
    int k;
    cin >> k;
    vector<vector<char>> map(m, vector<char>(n));
    rep(i, m) rep(j, n)
    {
        cin >> map[i][j];
    }
    vector<vector<vector<int>>> s(m + 1, vector<vector<int>>(n + 1, vector<int>(3, 0)));
    rep(i, m) rep(j, n)
    {
        rep(k, 3)
        {
            s[i + 1][j + 1][k] = s[i + 1][j][k] + s[i][j + 1][k] - s[i][j][k];
        }
        if (map[i][j] == 'J')
            s[i + 1][j + 1][0]++;
        if (map[i][j] == 'O')
            s[i + 1][j + 1][1]++;
        if (map[i][j] == 'I')
            s[i + 1][j + 1][2]++;
    }

    rep(i, k)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        rep(j, 3)
        {
            if (j)
                cout << ' ' << s[c][d][j] - s[a - 1][d][j] - s[c][b - 1][j] + s[a - 1][b - 1][j];
            else
                cout << s[c][d][j] - s[a - 1][d][j] - s[c][b - 1][j] + s[a - 1][b - 1][j];
        }
        cout << endl;
    }

    return 0;
}