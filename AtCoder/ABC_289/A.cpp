#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, x, n) for (int i = x; i < (n); i++)
using ll = long long;
int main()
{
    string s;
    cin >> s;
    rep(i, s.size())
    {
        if (s[i] == '1')
            s[i] = '0';
        else
            s[i] = '1';
    }
    cout << s << endl;
    return 0;
}
