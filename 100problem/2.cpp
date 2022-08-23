#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, x, n) for (int i = x; i < (n); i++)
using ll = long long;
int main()
{
    int n;
    cin >> n;
    int ans = 0;
    rep2(i, 1, n + 1)
    {
        int c = 0;
        rep2(j, 1, i + 1)
        {
            if (i % j == 0 && i % 2 != 0)
                c++;
        }
        if (c == 8)
            ans++;
    }
    cout << ans << endl;
    return 0;
}
