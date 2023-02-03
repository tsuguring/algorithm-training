#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, x, n) for (int i = x; i < (n); i++)
using ll = long long;

vector<vector<int>> block(90, vector<int>(90, 0));
int m, n;
int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};
int cnt;
int ans = 0;

void dfs(int x, int y, int cnt)
{
    block[x][y] = 0;
    rep(i, 4)
    {
        int nx = x + dx[i];
        int ny = y + dy[i];
        if (nx >= 0 and nx < m and ny >= 0 and ny < n and block[nx][ny])
        {
            // cout << nx << ' ' << ny << ' ' << cnt << endl;
            dfs(nx, ny, cnt + 1);
        }
    }
    block[x][y] = 1;
    ans = max(ans, cnt);
}
int main()
{
    cin >> m >> n;
    rep(i, n)
    {
        rep(j, m)
        {
            int ice;
            cin >> ice;
            block[j][i] = ice;
        }
    }

    rep(i, n)
    {
        rep(j, m)
        {
            if (block[j][i])
            {
                // cout << "start" << j << ' ' << i << endl;
                cnt = 1;
                dfs(j, i, cnt);
                // cout << "finish" << endl;
            }
        }
    }

    cout << ans << endl;

    return 0;
}