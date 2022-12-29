#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, x, n) for (int i = x; i < (n); i++)
using ll = long long;
int main()
{
    int n, q;
    cin >> n;
    vector<int> s(n);
    rep(i, n) cin >> s[i];
    cin >> q;
    int ans = 0;
    rep(i, q)
    {
        int t;
        cin >> t;
        int l = 0, r = n, mid = (l + r) / 2;
        while (1)
        {
            if (l >= r)
                break;
            if (s[mid] == t)
            {
                ans++;
                break;
            }
            if (s[mid] < t)
            {
                l = mid + 1;
                mid = (l + r) / 2;
            }
            if (s[mid] > t)
            {
                r = mid;
                mid = (l + r) / 2;
            }
        }
    }
    cout << ans << endl;

    return 0;
}