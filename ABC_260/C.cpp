#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, x, n) for (int i = x; i < (n); i++)
using ll = long long;
int main()
{
    int n, x, y;
    cin >> n >> x >> y;
    ll r[n], b[n];
    r[0] = 0;
    b[0] = 1;
    rep2(i, 1, n)
    {
        b[i] = r[i - 1] + b[i - 1] * y;
        r[i] = r[i - 1] + b[i] * x;
    }
    cout << r[n - 1] << endl;

    return 0;
}