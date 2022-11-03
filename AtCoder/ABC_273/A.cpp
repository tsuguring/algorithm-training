#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, x, n) for (int i = x; i < (n); i++)
using ll = long long;
int main()
{
    int n;
    cin >> n;
    int ans[11];
    ans[0] = 1;
    if (n)
    {
        rep2(i, 1, n + 1)
        {
            ans[i] = i * ans[i - 1];
        }
    }

    cout << ans[n] << endl;

    return 0;
}