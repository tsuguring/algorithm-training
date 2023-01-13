#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, x, n) for (int i = x; i < (n); i++)
using ll = long long;

int main()
{
    int t;
    cin >> t;
    rep(i, t)
    {
        ll n;
        cin >> n;
        ll p, q;
        for (ll i = 2; i * i * i <= n; i++)
        {
            if (n % i != 0)
                continue;
            if (n / i % i == 0)
            {
                p = i;
                q = n / (p * p);
            }
            else
            {
                p = sqrt(n / i);
                q = i;
            }
            break;
        }
        cout << p << ' ' << q << endl;
    }
    return 0;
}