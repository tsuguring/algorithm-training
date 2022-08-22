#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, x, n) for (int i = x; i < (n); i++)
using ll = long long;
int main()
{
    int n, k;
    cin >> n >> k;
    if (k == 1)
    {
        cout << "Yes" << endl;
        return 0;
    }
    vector<int> a(n), b, ans;
    rep(i, n) cin >> a[i];
    ans = a;
    sort(ans.begin(), ans.end());
    rep(i, k)
    {
        vector<int> b;
        for (int j = i; j < n; j += k)
        {
            b.push_back(a[j]);
        }
        sort(b.begin(), b.end());
        for (int j = i; j < n; j += k)
        {
            a[j] = b[j / k];
        }
    }
    if (a == ans)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}