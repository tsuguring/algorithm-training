#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, x, n) for (int i = x; i < (n); i++)
using ll = long long;
int main()
{
    int n, q;
    cin >> n >> q;
    string s;
    cin >> s;
    int t, x, p = 0;
    rep(i, q)
    {
        cin >> t >> x;
        if (t == 1)
        {
            p = (p + x) % n;
        }
        else
        {
            cout << s.at(((x - 1) - p + n) % n) << endl;
        }
    }

    return 0;
}