#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, x, n) for (int i = x; i < (n); i++)
using ll = long long;
int main()
{

    while (1)
    {
        int w, h;
        cin >> w >> h;
        if (!w and !h)
            break;
        int g[w][h];
        rep(i, w) rep(j, h) g[w][h] = 0;
        map<pair<pair<int, int>, pair<int, int>>, bool> m;
        rep(i, 2 * h - 1)
        {
            if (i % 2)
            {
                rep(j, w)
                {
                    int wall;
                    cin >> wall;
                    if (wall)
                    {
                        m[make_pair(make_pair(j, i / 2), make_pair(j, i / 2 + 1))] = 1;
                        m[make_pair(make_pair(j, i / 2 + 1), make_pair(j, i / 2))] = 1;
                    }
                }
            }
            else
            {
                rep(j, w - 1)
                {
                    int wall;
                    cin >> wall;
                    if (wall)
                    {
                        m[make_pair(make_pair(j, i / 2), make_pair(j + 1, i / 2))] = 1;
                        m[make_pair(make_pair(j + 1, i / 2), make_pair(j, i / 2))] = 1;
                    }
                }
            }
        }
        // for (auto itr = m.begin(); itr != m.end(); itr++)
        // {
        //     cout << itr->first.first.first << ' ' << itr->first.first.second << ' ' << "to" << ' ' << itr->first.second.first << ' ' << itr->first.second.second << endl;
        // }
        queue<pair<int, int>> q;
        map<pair<int, int>, int> d;
        d[make_pair(0, 0)] = 1;
        q.push(make_pair(0, 0));
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
                // cout << nx << ' ' << ny << ' ' << m[make_pair(now, make_pair(nx, ny))] << ' ' << d[make_pair(nx, ny)] << endl;
                if (nx >= 0 and nx < w and ny >= 0 and ny < h and !m[make_pair(now, make_pair(nx, ny))] and !d[make_pair(nx, ny)])
                {
                    // cout << "now=" << now.first << ' ' << now.second << ' ' << "next=" << nx << ' ' << ny << endl;
                    d[make_pair(nx, ny)] = d[now] + 1;
                    q.push(make_pair(nx, ny));
                }
            }
        }
        cout << d[make_pair(w - 1, h - 1)] << endl;
    }
    return 0;
}