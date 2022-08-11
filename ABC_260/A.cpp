#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, x, n) for (int i = x; i < (n); i++)
using ll = long long;
int main()
{
    string s;
    bool ans = false;
    cin >> s;
    rep(i, s.size())
    {
        if (count(s.begin(), s.end(), s[i]) == 1)
        {
            cout << s[i] << endl;
            ans = true;
            break;
        }
    }
    if (!ans)
        cout << "-1" << endl;
    return 0;
}