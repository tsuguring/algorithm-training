#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, x, n) for (int i = x; i < (n); i++)
using ll = long long;
int main()
{
    int n, k, q;
    cin >> n >> k >> q;
    vector<int> a(k);
    rep(i, k)
    {
        a[i] = 0;
    }
    rep(i, k)
    {
        int x;
        cin >> x;
        a[i] = x;
    }
    int l;
    rep(i, q)
    {
        bool c = false;
        cin >> l;
        if (a[l - 1] != n)
        {
            rep(j, k)
            {
                if (a[j] == a[l - 1] + 1)
                {
                    c = !c;
                }
            }
            if (c == false)
            {
                a[l - 1] += 1;
                // cout << a[l - 1] << endl;
            }
        }
    }

    rep(i, k)
    {
        if (i == k - 1)
            cout << a[i];
        else
            cout << a[i] << ' ';
    }
    return 0;
}