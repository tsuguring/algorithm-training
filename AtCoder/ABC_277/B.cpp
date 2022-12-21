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
    bool c = false;
    rep(i, n)
    {
        string s;
        cin >> s;
        if (s[0] != 'H' and s[0] != 'D' and s[0] != 'C' and s[0] != 'S')
        {
            c = true;
        }
        if (s[1] != 'A' and s[1] != '2' and s[1] != '3' and s[1] != '4' and s[1] != '5' and s[1] != '6' and s[1] != '7' and s[1] != '8' and s[1] != '9' and s[1] != 'T' and s[1] != 'J' and s[1] != 'Q' and s[1] != 'K')
        {
            c = true;
        }
        if (m[s] == 1)
        {
            c = true;
        }
        m[s] = 1;
    }
    if (!c)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}