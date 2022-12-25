#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, x, n) for (int i = x; i < (n); i++)
using ll = long long;
int main()
{
    int n;
    cin >> n;
    bool mode = false;
    string ans = "";
    rep(i, n)
    {
        char c;
        cin >> c;
        if (c == '"')
            mode = !mode;
        if (!mode)
        {
            if (c == ',')
            {
                ans.push_back('.');
            }
            else
                ans.push_back(c);
        }
        else
            ans.push_back(c);
    }
    cout << ans << endl;
    return 0;
}