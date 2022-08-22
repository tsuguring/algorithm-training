#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, x, n) for (int i = x; i < (n); i++)
using ll = long long;
int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<pair<int, char>> v;
    int ans = 0;
    rep(i, n)
    {
        int w;
        cin >> w;
        v.push_back({w, s.at(i)});
        if (s.at(i) == '1')
            ans++;
    }

    sort(v.begin(), v.end());

    // rep(i, n) cout << v.at(i).first << " " << v.at(i).second << endl;

    int m = ans;
    // cout << ans << endl;
    rep(i, n)
    {
        if (v.at(i).second == '1')
            ans--;
        else
            ans++;
        if (i < n - 1)
        {
            if (v.at(i).first != v.at(i + 1).first)
                m = max(m, ans);
        }
        else
            m = max(m, ans);
    }

    cout << m << endl;
    return 0;
}