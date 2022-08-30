#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, x, n) for (int i = x; i < (n); i++)
using ll = long long;
int main()
{
    int n;
    string s;
    cin >> n >> s;
    int ans = 0;
    rep(i, 1000)
    {
        vector<int> ss = {};
        ss.push_back(i / 100);
        ss.push_back(i / 10 % 10);
        ss.push_back(i % 10);
        int c = 0;
        rep(j, n)
        {
            if ('0' + ss[c] == s[j])
            {
                c++;
                if (c == 3)
                {
                    ans++;
                    break;
                }
            }
        }
    }

    cout << ans << endl;

    return 0;
}