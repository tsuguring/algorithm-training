#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, x, n) for (int i = x; i < (n); i++)
using ll = long long;
int main()
{
    int h, w, n;
    cin >> h >> w >> n;
    vector<vector<char>> b(w, vector<char>(h));
    pair<int, int> s;
    rep(i, h)
    {
        rep(j, w)
        {
            cin >> b[j][i];
            if (b[j][i] == 'S')
                s = make_pair(j, i);
        }
    }
    queue<pair<int, int>> q;
    map<pair<int, int>, int> d;
    q.push(s);
    d[s] = 1;
    int dx[] = {0, 0, -1, 1};
    int dy[] = {-1, 1, 0, 0};
    int cheese = 1;
    int ans = 0;
    while (!q.empty())
    {
        pair<int, int> now = q.front();
        if (int(b[now.first][now.second]) == (cheese + '0'))
        {
            ans += d[now] - 1;
            if (cheese == n)
            {
                cout << ans << endl;
                break;
            }
            queue<pair<int, int>>().swap(q);
            q.push(now);
            for (auto itr = d.begin(); itr != d.end(); itr++)
            {
                d[itr->first] = 0;
            }
            d[now] = 1;
            cheese++;
            cout << "Next" << endl;
        }
        q.pop();
        rep(i, 4)
        {
            int nx = now.first + dx[i];
            int ny = now.second + dy[i];
            if (nx >= 0 && ny >= 0 && nx < w && ny < h && b[nx][ny] != 'X' && !d[make_pair(nx, ny)])
            {
                cout << nx << ' ' << ny << ' ' << d[now] << endl;
                q.push(make_pair(nx, ny));
                d[make_pair(nx, ny)] = d[now] + 1;
            }
        }
    }

    return 0;
}