#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, x, n) for (int i = x; i < (n); i++)
using ll = long long;
int main()
{
    int r, c;
    cin >> r >> c;
    int a[2][2];
    rep(i, 2) rep(j, 2) cin >> a[i][j];
    cout << a[r - 1][c - 1] << endl;
    return 0;
}