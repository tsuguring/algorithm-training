#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, x, n) for (int i = x; i < (n); i++)
using ll = long long;
int main()
{
    int g[16][16] = {0};
    g[1][2] = g[2][4] = g[2][5] = g[4][8] = g[4][9] = g[5][10] = g[5][11] = g[3][6] = g[3][7] = g[6][12] = g[6][13] = g[7][14] = g[7][15] = 1;
    int a, b;
    cin >> a >> b;
    if (g[a][b] || g[b][a])
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}