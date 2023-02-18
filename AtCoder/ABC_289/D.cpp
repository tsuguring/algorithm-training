#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, x, n) for (int i = x; i < (n); i++)
using ll = long long;
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i, n) cin >> a[i];
    int m;
    cin >> m;
    vector<int> b(m);
    rep(i, m) cin >> b[i];
    int x;
    cin >> x;

    vector<int> t(x + 1, 0);
    rep(i, m) t[b[i]] = 2;
    t[0] = 1;

    rep(i, x + 1)
    {
        rep(j, n)
        {
            if (t[i] == 1 and i + a[j] <= x)
                if (t[i + a[j]] != 2)
                    t[i + a[j]] = 1;
        }
    }
    if (t[x] == 1)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}