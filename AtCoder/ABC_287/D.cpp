#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, x, n) for (int i = x; i < (n); i++)
using ll = long long;
int main()
{
    string s, t;
    cin >> s >> t;
    vector<bool> ans(t.size() + 1, true);
    rep(i, 2)
    {
        bool ok = true;
        rep(j, t.size())
        {
            if (s[j] != t[j] and s[j] != '?' and t[j] != '?')
                ok = false;
            if (!ok)
                ans[j + 1] = false;
        }
        reverse(s.begin(), s.end());
        reverse(t.begin(), t.end());
        reverse(ans.begin(), ans.end());
    }
    rep(i, ans.size())
    {
        if (ans[i])
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }

    return 0;
}