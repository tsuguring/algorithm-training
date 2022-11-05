#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, x, n) for (int i = x; i < (n); i++)
using ll = long long;
int main()
{
    string s;
    cin >> s;
    int c = 0;
    rep(i, s.size())
    {
        if (s[i] == 'a')
        {
            c = i + 1;
        }
    }

    if (c)
        cout << c << endl;
    else
        cout << -1 << endl;

    return 0;
}