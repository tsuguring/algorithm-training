#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, x, n) for (int i = x; i < (n); i++)
using ll = long long;
int main()
{
    ll x;
    int k;
    cin >> x >> k;
    if (x > k)
    {
        rep2(i, 1, k + 1)
        {
            ll y = x % ll(pow(10, i));
            ll z = x / ll(pow(10, i));
            if (y / pow(10, i - 1) > 4)
                z += 1;
            x = z * ll(pow(10, i));
        }
    }
    else
    {
        rep2(i, 1, x + 1)
        {
            ll y = x % ll(pow(10, i));
            ll z = x / ll(pow(10, i));
            if (y / pow(10, i - 1) > 4)
                z += 1;
            x = z * ll(pow(10, i));
        }
    }
    cout << x << endl;

    return 0;
}