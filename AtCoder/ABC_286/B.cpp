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
    rep(i, s.size())
    {
        // cout << s[i] << endl;
        if (s[i] == 'n' and s[i + 1] == 'a')
        {
            s.erase(i, 2);
            s.insert(s.begin() + i, 'n');
            s.insert(s.begin() + i + 1, 'y');
            s.insert(s.begin() + i + 2, 'a');
        }
    }
    cout << s << endl;
    return 0;
}