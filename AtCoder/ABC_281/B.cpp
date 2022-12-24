#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, x, n) for (int i = x; i < (n); i++)
using ll = long long;
int main()
{
    int n, m;
    cin >> n >> m;
    vector<string> s(n);
    bool c = false;
    int ans = 0;
    rep(i, n)
    {
        cin >> s[i];
    }
    rep(i, n - 1)
    {
        rep2(j, i + 1, n)
        {
            c = false;
            rep(k, m)
            {
                if (s[i].at(k) == 'x' && s[j].at(k) == 'x')
                {
                    c = true;
                    break;
                }
            }
            if (!c)
                ans++;
        }
    }
    cout << ans << endl;
    return 0;
}