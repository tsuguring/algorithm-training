#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, x, n) for (int i = x; i < (n); i++)
using ll = long long;

vector<int> a;

int getLengthLIS(int n)
{
    vector<int> l;
    l.push_back(a[0]);
    rep2(i, 1, n)
    {
        if (l.back() < a[i])
        {
            l.push_back(a[i]);
        }
        else
        {
            *lower_bound(l.begin(), l.end(), a[i]) = a[i];
        }
    }
    return l.size();
}

int main()
{
    int n;
    cin >> n;
    a.resize(n);
    rep(i, n) cin >> a[i];

    int ans = getLengthLIS(n);

    cout << ans << endl;

    return 0;
}