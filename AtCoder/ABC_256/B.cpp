#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, x, n) for (int i = x; i < (n); i++)
using ll = long long;
int main()
{
    int n;
    cin >> n;
    vector<int> a(n), b(4);
    rep(i, n) cin >> a[i];
    int p = 0;
    rep(i, n)
    {
        b[0] = 1;
        vector<int> m = {};
        rep(j, 4)
        {
            if (b[j] == 1)
            {
                b[j] = 0;
                if (j + a[i] > 3)
                    p++;
                else
                    m.push_back(j + a[i]);
            }
        }
        rep(j, m.size())
        {
            b[m[j]] = 1;
        }
    }
    cout << p << endl;
    return 0;
}