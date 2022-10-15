#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, x, n) for (int i = x; i < (n); i++)

int main()
{
    int n, q;
    cin >> n;
    vector<int> a(n);
    rep(i, n) cin >> a[i];
    cin >> q;
    rep(i, q)
    {
        bool ans = false;
        int m;
        cin >> m;
        for (int j = 1; j < (1 << n); j++)
        {
            int sum = 0;
            rep(k, n)
            {
                if (j & (1 << k))
                    sum += a[k];
            }
            if (sum == m)
            {
                ans = true;
                break;
            }
        }
        if (ans)
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }
    return 0;
}