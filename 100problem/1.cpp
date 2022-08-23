#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, x, n) for (int i = x; i < (n); i++)
using ll = long long;
int main()
{
    vector<int> v;
    while (1)
    {
        int n, x;
        int ans = 0;
        cin >> n >> x;
        if (n == 0 and x == 0)
            break;
        rep2(i, 1, n + 1)
        {
            rep2(j, i + 1, n + 1)
            {
                rep2(k, j + 1, n + 1)
                {
                    if (i + j + k == x)
                        ans++;
                }
            }
        }
        v.push_back(ans);
    }
    rep(i, v.size())
    {
        cout << v[i] << endl;
    }
    return 0;
}