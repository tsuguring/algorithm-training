#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, x, n) for (int i = x; i < (n); i++)
using ll = long long;
int main()
{
    int n;
    cin >> n;
    vector<ll> s(n), a(n);
    rep(i, n) cin >> s[i];
    int t = 0;
    rep(i, n)
    {
        if (i)
        {
            t = s[i] - s[i - 1];
            cout << t << ' ';
        }
        else
            cout << s[i] << ' ';
    }
    cout << endl;

    return 0;
}