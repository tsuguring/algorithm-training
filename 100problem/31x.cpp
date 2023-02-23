#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, x, n) for (int i = x; i < (n); i++)
using ll = long long;

int main()
{
    int w, h;
    cin >> w >> h;
    int g[w + 2][h + 2] = {0};
    rep(i, w + 2)
    {
        rep(j, h + 2)
        {
            g[i][j] = 0;
        }
    }
    rep2(i, 1, h + 1)
    {
        rep2(j, 1, w + 1)
        {
            cin >> g[j][i];
        }
    }

    int odx[] = {0, -1, 0, 1, 1, 1};
    int ody[] = {-1, 0, 1, 1, 0, -1};
    int edx[] = {-1, -1, -1, 0, 1, 0};
    int edy[] = {-1, 0, 1, 1, 0, -1};
    queue<pair<int, int>> q;
    map<pair<int, int>, bool> m;
    int ans = 0;
    q.push(make_pair(0, 0));
    m[make_pair(0, 0)] = 1;
    while (!q.empty())
    {
        pair<int, int> now = q.front();
        q.pop();
        rep(i, 6)
        {
            int nx, ny;
            if (now.second % 2)
            {
                nx = now.first + odx[i];
                ny = now.second + ody[i];
            }
            else
            {
                nx = now.first + edx[i];
                ny = now.second + edy[i];
            }

            if (nx >= 0 and nx < w + 2 and ny >= 0 and ny < h + 2 and !m[make_pair(nx, ny)])
            {
                if (g[nx][ny])
                {
                    // cout << "hit" << nx << ' ' << ny << "now" << now.first << ' ' << now.second << endl;
                    ans++;
                }
                else
                {
                    m[make_pair(nx, ny)] = 1;
                    q.push(make_pair(nx, ny));
                }
            }
        }
    }
    cout << ans << endl;

    return 0;
}