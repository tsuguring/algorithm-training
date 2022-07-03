#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, x, n) for (int i = x; i < (n); i++)
using ll = long long;
int main()
{
    int n;
    cin >> n;
    char c;
    int A[n][n];
    ll a = 0;
    rep(i, n)
    {
        rep(j, n)
        {
            cin >> c;
            A[i][j] = c - '0';
        }
    }
    vector<int> p = {1, 1, 1, 0, 0, -1, -1, -1}, q = {1, 0, -1, 1, -1, 1, 0, -1};
    rep(i, n)
    {
        rep(j, n)
        {
            rep(k, 8)
            {
                ll now = 0;
                int x = i, y = j;
                rep(l, n)
                {
                    now *= 10;
                    now += A[x][y];
                    x += p[k];
                    y += q[k];
                    x %= n;
                    x += n;
                    y %= n;
                    y += n;
                    x %= n;
                    y %= n;
                }
                a = max(a, now);
            }
        }
    }

    cout << a << endl;

    return 0;
}