#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, x, n) for (int i = x; i < (n); i++)
using ll = long long;
int main()
{
    string s, t;
    cin >> s >> t;
    rep(i, t.length())
    {
        if (s[i] != t[i])
        {
            cout << i + 1 << endl;
            break;
        }
    }
    return 0;
}