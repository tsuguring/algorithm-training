#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, x, n) for (int i = x; i < (n); i++)
using ll = long long;
int main()
{
    int n, q;
    cin >> n >> q;
    vector<vector<ll>> a(n);

    rep(i, n)
    {
        int l;
        cin >> l;
        rep(j, l)
        {
            ll al;
            cin >> al;
            a[i].push_back(al);
        }
    }
    rep(i, q)
    {
        int s, t;
        cin >> s >> t;
        cout << a[s - 1].at(t - 1) << endl;
    }
    return 0;
}