#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, x, n) for (int i = x; i < (n); i++)
using ll = long long;
int main()
{
    int n, k;
    cin >> n >> k;
    vector<ll> a(k);
    rep(i, k) cin >> a[i];
    vector<vector<ll>> xy(n, vector<ll>(2));
    rep(i, n) cin >> xy[i][0] >> xy[i][1];
    vector<double> dlist;
    rep(i, n)
    {
        ll dmin = 100000000000;
        rep(j, k)
        {
            dmin = min((xy[a[j] - 1][0] - xy[i][0]) * (xy[a[j] - 1][0] - xy[i][0]) + (xy[a[j] - 1][1] - xy[i][1]) * (xy[a[j] - 1][1] - xy[i][1]), dmin);
        }
        dlist.push_back(sqrt((double)dmin));
    }
    sort(dlist.begin(), dlist.end());
    printf("%12lf\n", dlist.back());

    return 0;
}