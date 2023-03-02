#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, x, n) for (int i = x; i < (n); i++)
using ll = long long;
int main()
{
    int h, w;
    cin >> h >> w;
    char g[w][h];
    int cblack = 0;
    rep(i, h) rep(j, w)
    {
        char input;
        cin >> input;
        if (input == '#')
            cblack++;
        g[j][i] = input;
    }
    queue<pair<int, int>> q;
    map<pair<int, int>, int> d;
    q.push(make_pair(0, 0));
    d[make_pair(0, 0)] = 1;
    int dx[] = {0, 1, 0, -1};
    int dy[] = {1, 0, -1, 0};
    while (!q.empty())
    {
        pair<int, int> now = q.front();
        if (now.first == w - 1 and now.second == h - 1)
            break;
        q.pop();
        rep(i, 4)
        {
            int nx = now.first + dx[i];
            int ny = now.second + dy[i];
            if (nx >= 0 and nx < w and ny >= 0 and ny < h and !d[make_pair(nx, ny)] and g[nx][ny] == '.')
            {
                d[make_pair(nx, ny)] = d[now] + 1;
                q.push(make_pair(nx, ny));
            }
        }
    }
    if (d[make_pair(w - 1, h - 1)])
        cout << w * h - ((d[make_pair(w - 1, h - 1)] + cblack)) << endl;
    else
        cout << -1 << endl;
    return 0;
}
