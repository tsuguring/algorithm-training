#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, x, n) for (int i = x; i < (n); i++)
using ll = long long;

int c[50][50];
int w, h;

void dfs(int x, int y)
{
    c[y][x] = 0;
    int dx[] = {-1, 0, 1, -1, 1, -1, 0, 1};
    int dy[] = {-1, -1, -1, 0, 0, 1, 1, 1};
    rep(i, 8)
    {
        int nx = x + dx[i];
        int ny = y + dy[i];
        if (nx >= 0 && nx < w && ny >= 0 && ny < h && c[ny][nx])
        {
            dfs(nx, ny);
        }
    }
}
int main()
{
    while (1)
    {
        cin >> w >> h;
        if (!w && !h)
            break;
        rep(i, h)
        {
            rep(j, w)
            {
                int celement;
                cin >> celement;
                c[i][j] = celement;
            }
        }
        int ans = 0;
        rep(i, h)
        {
            rep(j, w)
            {
                if (c[i][j])
                {
                    ans++;
                    dfs(j, i);
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}