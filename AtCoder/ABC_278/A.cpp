#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, x, n) for (int i = x; i < (n); i++)
using ll = long long;
int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    rep(i, n) cin >> a[i];
    rep(i, k)
    {
        a.erase(a.begin());
        a.push_back(0);
    }
    rep(i, a.size())
    {
        if (i)
            cout << ' ' << a[i];
        else
            cout << a[i];
    }
    cout << endl;
    return 0;
}