#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, x, n) for (int i = x; i < (n); i++)
using ll = long long;
int main()
{
    int n;
    cin >> n;
    map<string, int> m;
    vector<string> v;
    rep(i, n)
    {
        string s;
        cin >> s;
        v.push_back(s);
    }
    rep(i, n)
    {
        string ans;
        if (m[v[i]])
        {
            ans = v[i] + '(' + to_string(m[v[i]]) + ')';
        }
        else
            ans = v[i];
        m[v[i]]++;
        cout << ans << endl;
    }

    return 0;
}
