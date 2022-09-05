#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, x, n) for (int i = x; i < (n); i++)
using ll = long long;
int main()
{
    string s;
    cin >> s;
    vector<int> v(7);
    rep(i, s.size()) v[i] = 0;
    rep(i, s.size())
    {
        if (s[i] == '0')
        {
            if (i == 0 or i == 4)
                v[3]++;
            else if (i == 7 or i == 1)
                v[2]++;
            else if (i == 3)
                v[1] = 2;
            else if (i == 6)
                v[0] = 2;
            else if (i == 2 or i == 8)
                v[4]++;
            else if (i == 5)
                v[5] = 2;
            else
                v[6] = 2;
        }
    }

    bool ans = false;
    rep(i, v.size() - 1)
    {
        rep2(j, i + 1, v.size())
        {
            if (j - i > 1)
            {
                for (int k = i + 1; k < j; k++)
                {
                    if (v[i] != 2 and v[j] != 2 and v[k] == 2 and s[0] == '0')
                        ans = true;
                }
            }
        }
    }

    if (ans)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}