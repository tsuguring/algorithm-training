#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, x, n) for (int i = x; i < (n); i++)
using ll = long long;
int main()
{
    int h, w;
    cin >> h >> w;
    vector<vector<char>> g(h, vector<char>(w));
    rep(i, h) rep(j, w) cin >> g[i][j];
    pair<int, int> p = {0, 0};
    map<pair<int, int>, int> m = {};
    while (1)
    {
        if (!m[p])
        {
            m[p] = 1;
            if (g[p.first][p.second] == 'U' && p.first == 0)
            {
                cout << p.first + 1 << ' ' << p.second + 1 << endl;
                return 0;
            }
            if (g[p.first][p.second] == 'U' && p.first != 0)
                p.first -= 1;
            if (g[p.first][p.second] == 'D' && p.first == h - 1)
            {
                cout << p.first + 1 << ' ' << p.second + 1 << endl;
                return 0;
            }
            if (g[p.first][p.second] == 'D' && p.first != h - 1)
                p.first += 1;
            if (g[p.first][p.second] == 'L' && p.second == 0)
            {
                cout << p.first + 1 << ' ' << p.second + 1 << endl;
                return 0;
            }
            if (g[p.first][p.second] == 'L' && p.second != 0)
                p.second -= 1;
            if (g[p.first][p.second] == 'R' && p.second == w - 1)
            {
                cout << p.first + 1 << ' ' << p.second + 1 << endl;
                return 0;
            }
            if (g[p.first][p.second] == 'R' && p.second != w - 1)
                p.second += 1;
        }
        else
        {
            cout << -1 << endl;
            return 0;
        }
    }
    return 0;
}