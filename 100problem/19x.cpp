#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, x, n) for (int i = x; i < (n); i++)
using ll = long long;
int main()
{
    int l, n, m;
    cin >> l >> n >> m;
    vector<int> d(n), k(m);
    rep(i, n)
    {
        if (i)
            cin >> d[i];
        else
            d[i] = 0;
    }
    d.push_back(l);
    rep(i, m) cin >> k[i];
    sort(d.begin(), d.end());
    int sum = 0;
    rep(i, m)
    {
        int l = 0, r = n;
        while (r - l > 1)
        {
            int mid = (l + r) / 2;
            if (k[i] >= d[mid])
                l = mid;
            else
                r = mid;
        }
        sum += min(abs(d[l] - k[i]), abs(d[r] - k[i]));
    }
    cout << sum << endl;

    return 0;
}