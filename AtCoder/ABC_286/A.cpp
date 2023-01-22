#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, x, n) for (int i = x; i < (n); i++)
using ll = long long;
int main()
{
    int n, p, q, r, s;
    cin >> n >> p >> q >> r >> s;
    vector<int> a(n);
    rep(i, n) cin >> a[i];
    rep(i, (q - p) + 1)
        iter_swap(a.begin() + p - 1 + i, a.begin() + r - 1 + i);
    rep(i, n) if (i) cout << ' ' << a[i];
    else cout << a[i];
    cout << endl;

    return 0;
}