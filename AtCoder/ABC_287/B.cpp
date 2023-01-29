#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, x, n) for (int i = x; i < (n); i++)
using ll = long long;
int main()
{
    int n, m;
    cin >> n >> m;
    vector<string> s(n), t(m);
    rep(i, n)
    {
        cin >> s[i];
        s[i].erase(0, 3);
    }
    rep(i, m)
    {
        cin >> t[i];
    }
    int ans = 0;
    rep(i, n)
    {
        bool c = false;
        rep(j, m)
        {
            if (s[i] == t[j])
                c = true;
        }
        if (c)
            ans++;
    }
    cout << ans << endl;
    return 0;
}