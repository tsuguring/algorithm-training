#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, x, n) for (int i = x; i < (n); i++)
using ll = long long;
int main()
{
    int r, c;
    cin >> r >> c;
    pair<int, int> s, g;
    cin >> s.second >> s.first;
    cin >> g.second >> g.first;
    s.first--;
    s.second--;
    g.first--;
    g.second--;
    vector<vector<char>> b(c, vector<char>(r));
    rep(i, r)
    {
        rep(j, c)
        {
            cin >> b[j][i];
        }
    }

    queue<pair<int, int>> q;
    q.push(s);
    int dx[] = {0, 0, -1, 1};
    int dy[] = {-1, 1, 0, 0};
    int ans = 0;
    map<pair<int, int>, int> m;
    q.push(s);
    m[s] = 1;
    while (!q.empty())
    {
        pair<int, int> now = q.front();
        q.pop();
        rep(i, 4)
        {
            int nx = now.first + dx[i];
            int ny = now.second + dy[i];
            if (nx >= 0 && ny >= 0 && nx < c && ny < r && b[nx][ny] == '.' && !m[make_pair(nx, ny)])
            {
                // cout << nx << ' ' << ny << endl;
                q.push(make_pair(nx, ny));
                // cout << m[now] << endl;
                m[make_pair(nx, ny)] = m[now] + 1;
            }
        }
    }
    cout << m[g] - 1 << endl;

    return 0;
}